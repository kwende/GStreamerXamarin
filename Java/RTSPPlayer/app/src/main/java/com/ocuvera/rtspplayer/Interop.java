package com.ocuvera.rtspplayer;

public class Interop {
    private native void nativeInit();     // Initialize native code, build pipeline, etc
    private native void nativeFinalize(); // Destroy pipeline and shutdown native code
    private native void nativeSetUri(String uri); // Set the URI of the media to play
    private native void nativePlay();     // Set pipeline to PLAYING
    private native void nativeSetPosition(int milliseconds); // Seek to the indicated position, in milliseconds
    private native void nativePause();    // Set pipeline to PAUSED
    private static native boolean nativeClassInit(); // Initialize native class: cache Method IDs for callbacks
    private native void nativeSurfaceInit(Object surface); // A new surface is available
    private native void nativeSurfaceFinalize(); // Surface about to be destroyed
    private long native_custom_data;
    private Boolean is_initialized;

    public void Init(){
        nativeInit();
    }

    public Boolean ClassInit(){
        return nativeClassInit();
    }

    public void Finalize(){
        nativeFinalize();
    }

    public void SetUri(String uri){
        nativeSetUri(uri);
    }

    public void Play(){
        nativePlay();
    }

    public void SetPosition(int ms){
        nativeSetPosition(ms);
    }

    public void Pause(){
        nativePause();
    }

    public void SurfaceInit(Object surface){
        nativeSurfaceInit(surface);
    }

    public void SurfaceFinalize(){
        nativeSurfaceFinalize();
    }

    public Boolean GetIsInitialized(){
        return is_initialized;
    }

    private void setMessage(final String message){

    }
    private void setCurrentPosition(final int position, final int duration){

    }
    private void onGStreamerInitialized(){
        is_initialized = true;
    }
    private void onMediaSizeChanged(int width, int height){

    }


}
