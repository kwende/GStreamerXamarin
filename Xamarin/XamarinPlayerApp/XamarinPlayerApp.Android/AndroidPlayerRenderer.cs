using Android.Content;
using Android.Graphics;
using Android.Runtime;
using Android.Views;
using Com.Ocuvera.Rtspplayer;
using Org.Freedesktop.Gstreamer;
using Xamarin.Forms;
using Xamarin.Forms.Platform.Android;
using XamarinPlayerApp;
using XamarinPlayerApp.Droid;

[assembly: ExportRenderer(typeof(CameraView), typeof(AndroidPlayerRenderer))]
namespace XamarinPlayerApp.Droid
{
    internal class AndroidPlayerRenderer : ViewRenderer<CameraView, GStreamerSurfaceView>, ISurfaceHolderCallback
    //internal class AndroidPlayerRenderer : ViewRenderer<CameraView, Com.Ocuvera.Rtspplayer.GStreamerSurfaceView>, ISurfaceHolderCallback
    {
        private GStreamerSurfaceView _gstreamerSurfaceView;
        private Context _context;
        private bool _initialized = false;
        private Interop _interop;

        public AndroidPlayerRenderer(Context context) : base(context)
        {
            _context = Context;
        }

        public void SurfaceChanged(ISurfaceHolder holder, [GeneratedEnum] Format format, int width, int height)
        {
        }

        public void SurfaceCreated(ISurfaceHolder holder)
        {
            // take the current surface and send it down to GStreamer
            _interop.SurfaceInit(holder.Surface);
            // check to make sure that gstreamer is initialized now (this should be set
            // to tru eafter the surface init). 
            bool isInitialized = (bool)_interop.IsInitialized;
            if (isInitialized)
            {
                // play the video. 
                _interop.SetUri("");
                _interop.SetPosition(0);
                _interop.Play();
            }
        }

        public void SurfaceDestroyed(ISurfaceHolder holder)
        {
        }

        protected override void OnElementChanged(ElementChangedEventArgs<CameraView> e)
        {
            base.OnElementChanged(e);

            if (Control == null)
            {
                //// instantiate the gstreamer surface view
                //_gstreamerSurfaceView = new GStreamerSurfaceView(_context);
                //// register for callbacks with its view holder
                //_gstreamerSurfaceView.Holder.AddCallback(this);
                //// set the control to be rendered by this instance of AndroidPlayerRenderer to the gstraemer surface view
                //SetNativeControl(_gstreamerSurfaceView);

                _gstreamerSurfaceView = new GStreamerSurfaceView(_context);
                _gstreamerSurfaceView.Holder.AddCallback(this);
                SetNativeControl(_gstreamerSurfaceView);

                if (!_initialized)
                {
                    // one time initialization with the pre-cooked code from the gstreamer community for Android support. 
                    // this causes gstreamer to initialize and then hook "nativeInit" in the GStreamer class in Android Studio. 
                    GStreamer.Init(_context);

                    _interop = new Interop();
                    // this invokes "ClassInit" in the Interop class, which in turn calls "nativeClassInit" in C. 
                    if ((bool)_interop.ClassInit() == true)
                    {
                        _interop.Init();
                    }

                    _initialized = true;
                }
            }
        }
    }
}