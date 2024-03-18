#include <gst/gst.h>
#include <gio/gio.h>

#define GST_G_IO_MODULE_DECLARE(name) \
extern void G_PASTE(g_io_, G_PASTE(name, _load)) (gpointer data)

#define GST_G_IO_MODULE_LOAD(name) \
G_PASTE(g_io_, G_PASTE(name, _load)) (NULL)

/* Declaration of static plugins */
  GST_PLUGIN_STATIC_DECLARE(coreelements);  GST_PLUGIN_STATIC_DECLARE(coretracers);  GST_PLUGIN_STATIC_DECLARE(adder);  GST_PLUGIN_STATIC_DECLARE(app);  GST_PLUGIN_STATIC_DECLARE(audioconvert);  GST_PLUGIN_STATIC_DECLARE(audiomixer);  GST_PLUGIN_STATIC_DECLARE(audiorate);  GST_PLUGIN_STATIC_DECLARE(audioresample);  GST_PLUGIN_STATIC_DECLARE(audiotestsrc);  GST_PLUGIN_STATIC_DECLARE(compositor);  GST_PLUGIN_STATIC_DECLARE(gio);  GST_PLUGIN_STATIC_DECLARE(overlaycomposition);  GST_PLUGIN_STATIC_DECLARE(pango);  GST_PLUGIN_STATIC_DECLARE(rawparse);  GST_PLUGIN_STATIC_DECLARE(typefindfunctions);  GST_PLUGIN_STATIC_DECLARE(videoconvertscale);  GST_PLUGIN_STATIC_DECLARE(videorate);  GST_PLUGIN_STATIC_DECLARE(videotestsrc);  GST_PLUGIN_STATIC_DECLARE(volume);  GST_PLUGIN_STATIC_DECLARE(autodetect);  GST_PLUGIN_STATIC_DECLARE(videofilter);  GST_PLUGIN_STATIC_DECLARE(switchbin);  GST_PLUGIN_STATIC_DECLARE(playback);  GST_PLUGIN_STATIC_DECLARE(subparse);  GST_PLUGIN_STATIC_DECLARE(ogg);  GST_PLUGIN_STATIC_DECLARE(theora);  GST_PLUGIN_STATIC_DECLARE(vorbis);  GST_PLUGIN_STATIC_DECLARE(opus);  GST_PLUGIN_STATIC_DECLARE(ivorbisdec);  GST_PLUGIN_STATIC_DECLARE(adaptivedemux2);  GST_PLUGIN_STATIC_DECLARE(alaw);  GST_PLUGIN_STATIC_DECLARE(apetag);  GST_PLUGIN_STATIC_DECLARE(audioparsers);  GST_PLUGIN_STATIC_DECLARE(auparse);  GST_PLUGIN_STATIC_DECLARE(avi);  GST_PLUGIN_STATIC_DECLARE(dv);  GST_PLUGIN_STATIC_DECLARE(flac);  GST_PLUGIN_STATIC_DECLARE(flv);  GST_PLUGIN_STATIC_DECLARE(flxdec);  GST_PLUGIN_STATIC_DECLARE(icydemux);  GST_PLUGIN_STATIC_DECLARE(id3demux);  GST_PLUGIN_STATIC_DECLARE(isomp4);  GST_PLUGIN_STATIC_DECLARE(jpeg);  GST_PLUGIN_STATIC_DECLARE(lame);  GST_PLUGIN_STATIC_DECLARE(matroska);  GST_PLUGIN_STATIC_DECLARE(mpg123);  GST_PLUGIN_STATIC_DECLARE(mulaw);  GST_PLUGIN_STATIC_DECLARE(multipart);  GST_PLUGIN_STATIC_DECLARE(png);  GST_PLUGIN_STATIC_DECLARE(speex);  GST_PLUGIN_STATIC_DECLARE(taglib);  GST_PLUGIN_STATIC_DECLARE(vpx);  GST_PLUGIN_STATIC_DECLARE(wavenc);  GST_PLUGIN_STATIC_DECLARE(wavpack);  GST_PLUGIN_STATIC_DECLARE(wavparse);  GST_PLUGIN_STATIC_DECLARE(xingmux);  GST_PLUGIN_STATIC_DECLARE(y4menc);  GST_PLUGIN_STATIC_DECLARE(adpcmdec);  GST_PLUGIN_STATIC_DECLARE(adpcmenc);  GST_PLUGIN_STATIC_DECLARE(assrender);  GST_PLUGIN_STATIC_DECLARE(bz2);  GST_PLUGIN_STATIC_DECLARE(codecalpha);  GST_PLUGIN_STATIC_DECLARE(codectimestamper);  GST_PLUGIN_STATIC_DECLARE(dash);  GST_PLUGIN_STATIC_DECLARE(dvbsubenc);  GST_PLUGIN_STATIC_DECLARE(dvbsuboverlay);  GST_PLUGIN_STATIC_DECLARE(dvdspu);  GST_PLUGIN_STATIC_DECLARE(hls);  GST_PLUGIN_STATIC_DECLARE(id3tag);  GST_PLUGIN_STATIC_DECLARE(ivfparse);  GST_PLUGIN_STATIC_DECLARE(kate);  GST_PLUGIN_STATIC_DECLARE(midi);  GST_PLUGIN_STATIC_DECLARE(mxf);  GST_PLUGIN_STATIC_DECLARE(openh264);  GST_PLUGIN_STATIC_DECLARE(opusparse);  GST_PLUGIN_STATIC_DECLARE(pcapparse);  GST_PLUGIN_STATIC_DECLARE(pnm);  GST_PLUGIN_STATIC_DECLARE(rfbsrc);  GST_PLUGIN_STATIC_DECLARE(siren);  GST_PLUGIN_STATIC_DECLARE(smoothstreaming);  GST_PLUGIN_STATIC_DECLARE(subenc);  GST_PLUGIN_STATIC_DECLARE(videoparsersbad);  GST_PLUGIN_STATIC_DECLARE(y4mdec);  GST_PLUGIN_STATIC_DECLARE(jpegformat);  GST_PLUGIN_STATIC_DECLARE(gdp);  GST_PLUGIN_STATIC_DECLARE(rsvg);  GST_PLUGIN_STATIC_DECLARE(openjpeg);  GST_PLUGIN_STATIC_DECLARE(spandsp);  GST_PLUGIN_STATIC_DECLARE(sbc);  GST_PLUGIN_STATIC_DECLARE(zbar);  GST_PLUGIN_STATIC_DECLARE(androidmedia);  GST_PLUGIN_STATIC_DECLARE(tcp);  GST_PLUGIN_STATIC_DECLARE(rtsp);  GST_PLUGIN_STATIC_DECLARE(rtp);  GST_PLUGIN_STATIC_DECLARE(rtpmanager);  GST_PLUGIN_STATIC_DECLARE(soup);  GST_PLUGIN_STATIC_DECLARE(udp);  GST_PLUGIN_STATIC_DECLARE(dtls);  GST_PLUGIN_STATIC_DECLARE(netsim);  GST_PLUGIN_STATIC_DECLARE(rist);  GST_PLUGIN_STATIC_DECLARE(rtmp2);  GST_PLUGIN_STATIC_DECLARE(rtpmanagerbad);  GST_PLUGIN_STATIC_DECLARE(rtponvif);  GST_PLUGIN_STATIC_DECLARE(sctp);  GST_PLUGIN_STATIC_DECLARE(sdpelem);  GST_PLUGIN_STATIC_DECLARE(srtp);  GST_PLUGIN_STATIC_DECLARE(srt);  GST_PLUGIN_STATIC_DECLARE(webrtc);  GST_PLUGIN_STATIC_DECLARE(nice);  GST_PLUGIN_STATIC_DECLARE(rtspclientsink);  GST_PLUGIN_STATIC_DECLARE(opengl);  GST_PLUGIN_STATIC_DECLARE(ipcpipeline);  GST_PLUGIN_STATIC_DECLARE(opensles);

/* Declaration of static gio modules */
  GST_G_IO_MODULE_DECLARE(openssl);

/* Call this function to load GIO modules */
static void
gst_android_load_gio_modules (void)
{
  GTlsBackend *backend;
  const gchar *ca_certs;

   GST_G_IO_MODULE_LOAD(openssl);

  ca_certs = g_getenv ("CA_CERTIFICATES");

  backend = g_tls_backend_get_default ();
  if (backend && ca_certs) {
    GTlsDatabase *db;
    GError *error = NULL;

    db = g_tls_file_database_new (ca_certs, &error);
    if (db) {
      g_tls_backend_set_default_database (backend, db);
      g_object_unref (db);
    } else {
      g_warning ("Failed to create a database from file: %s",
          error ? error->message : "Unknown");
    }
  }
}

/* This is called by gst_init() */
void
gst_init_static_plugins (void)
{
   GST_PLUGIN_STATIC_REGISTER(coreelements);  GST_PLUGIN_STATIC_REGISTER(coretracers);  GST_PLUGIN_STATIC_REGISTER(adder);  GST_PLUGIN_STATIC_REGISTER(app);  GST_PLUGIN_STATIC_REGISTER(audioconvert);  GST_PLUGIN_STATIC_REGISTER(audiomixer);  GST_PLUGIN_STATIC_REGISTER(audiorate);  GST_PLUGIN_STATIC_REGISTER(audioresample);  GST_PLUGIN_STATIC_REGISTER(audiotestsrc);  GST_PLUGIN_STATIC_REGISTER(compositor);  GST_PLUGIN_STATIC_REGISTER(gio);  GST_PLUGIN_STATIC_REGISTER(overlaycomposition);  GST_PLUGIN_STATIC_REGISTER(pango);  GST_PLUGIN_STATIC_REGISTER(rawparse);  GST_PLUGIN_STATIC_REGISTER(typefindfunctions);  GST_PLUGIN_STATIC_REGISTER(videoconvertscale);  GST_PLUGIN_STATIC_REGISTER(videorate);  GST_PLUGIN_STATIC_REGISTER(videotestsrc);  GST_PLUGIN_STATIC_REGISTER(volume);  GST_PLUGIN_STATIC_REGISTER(autodetect);  GST_PLUGIN_STATIC_REGISTER(videofilter);  GST_PLUGIN_STATIC_REGISTER(switchbin);  GST_PLUGIN_STATIC_REGISTER(playback);  GST_PLUGIN_STATIC_REGISTER(subparse);  GST_PLUGIN_STATIC_REGISTER(ogg);  GST_PLUGIN_STATIC_REGISTER(theora);  GST_PLUGIN_STATIC_REGISTER(vorbis);  GST_PLUGIN_STATIC_REGISTER(opus);  GST_PLUGIN_STATIC_REGISTER(ivorbisdec);  GST_PLUGIN_STATIC_REGISTER(adaptivedemux2);  GST_PLUGIN_STATIC_REGISTER(alaw);  GST_PLUGIN_STATIC_REGISTER(apetag);  GST_PLUGIN_STATIC_REGISTER(audioparsers);  GST_PLUGIN_STATIC_REGISTER(auparse);  GST_PLUGIN_STATIC_REGISTER(avi);  GST_PLUGIN_STATIC_REGISTER(dv);  GST_PLUGIN_STATIC_REGISTER(flac);  GST_PLUGIN_STATIC_REGISTER(flv);  GST_PLUGIN_STATIC_REGISTER(flxdec);  GST_PLUGIN_STATIC_REGISTER(icydemux);  GST_PLUGIN_STATIC_REGISTER(id3demux);  GST_PLUGIN_STATIC_REGISTER(isomp4);  GST_PLUGIN_STATIC_REGISTER(jpeg);  GST_PLUGIN_STATIC_REGISTER(lame);  GST_PLUGIN_STATIC_REGISTER(matroska);  GST_PLUGIN_STATIC_REGISTER(mpg123);  GST_PLUGIN_STATIC_REGISTER(mulaw);  GST_PLUGIN_STATIC_REGISTER(multipart);  GST_PLUGIN_STATIC_REGISTER(png);  GST_PLUGIN_STATIC_REGISTER(speex);  GST_PLUGIN_STATIC_REGISTER(taglib);  GST_PLUGIN_STATIC_REGISTER(vpx);  GST_PLUGIN_STATIC_REGISTER(wavenc);  GST_PLUGIN_STATIC_REGISTER(wavpack);  GST_PLUGIN_STATIC_REGISTER(wavparse);  GST_PLUGIN_STATIC_REGISTER(xingmux);  GST_PLUGIN_STATIC_REGISTER(y4menc);  GST_PLUGIN_STATIC_REGISTER(adpcmdec);  GST_PLUGIN_STATIC_REGISTER(adpcmenc);  GST_PLUGIN_STATIC_REGISTER(assrender);  GST_PLUGIN_STATIC_REGISTER(bz2);  GST_PLUGIN_STATIC_REGISTER(codecalpha);  GST_PLUGIN_STATIC_REGISTER(codectimestamper);  GST_PLUGIN_STATIC_REGISTER(dash);  GST_PLUGIN_STATIC_REGISTER(dvbsubenc);  GST_PLUGIN_STATIC_REGISTER(dvbsuboverlay);  GST_PLUGIN_STATIC_REGISTER(dvdspu);  GST_PLUGIN_STATIC_REGISTER(hls);  GST_PLUGIN_STATIC_REGISTER(id3tag);  GST_PLUGIN_STATIC_REGISTER(ivfparse);  GST_PLUGIN_STATIC_REGISTER(kate);  GST_PLUGIN_STATIC_REGISTER(midi);  GST_PLUGIN_STATIC_REGISTER(mxf);  GST_PLUGIN_STATIC_REGISTER(openh264);  GST_PLUGIN_STATIC_REGISTER(opusparse);  GST_PLUGIN_STATIC_REGISTER(pcapparse);  GST_PLUGIN_STATIC_REGISTER(pnm);  GST_PLUGIN_STATIC_REGISTER(rfbsrc);  GST_PLUGIN_STATIC_REGISTER(siren);  GST_PLUGIN_STATIC_REGISTER(smoothstreaming);  GST_PLUGIN_STATIC_REGISTER(subenc);  GST_PLUGIN_STATIC_REGISTER(videoparsersbad);  GST_PLUGIN_STATIC_REGISTER(y4mdec);  GST_PLUGIN_STATIC_REGISTER(jpegformat);  GST_PLUGIN_STATIC_REGISTER(gdp);  GST_PLUGIN_STATIC_REGISTER(rsvg);  GST_PLUGIN_STATIC_REGISTER(openjpeg);  GST_PLUGIN_STATIC_REGISTER(spandsp);  GST_PLUGIN_STATIC_REGISTER(sbc);  GST_PLUGIN_STATIC_REGISTER(zbar);  GST_PLUGIN_STATIC_REGISTER(androidmedia);  GST_PLUGIN_STATIC_REGISTER(tcp);  GST_PLUGIN_STATIC_REGISTER(rtsp);  GST_PLUGIN_STATIC_REGISTER(rtp);  GST_PLUGIN_STATIC_REGISTER(rtpmanager);  GST_PLUGIN_STATIC_REGISTER(soup);  GST_PLUGIN_STATIC_REGISTER(udp);  GST_PLUGIN_STATIC_REGISTER(dtls);  GST_PLUGIN_STATIC_REGISTER(netsim);  GST_PLUGIN_STATIC_REGISTER(rist);  GST_PLUGIN_STATIC_REGISTER(rtmp2);  GST_PLUGIN_STATIC_REGISTER(rtpmanagerbad);  GST_PLUGIN_STATIC_REGISTER(rtponvif);  GST_PLUGIN_STATIC_REGISTER(sctp);  GST_PLUGIN_STATIC_REGISTER(sdpelem);  GST_PLUGIN_STATIC_REGISTER(srtp);  GST_PLUGIN_STATIC_REGISTER(srt);  GST_PLUGIN_STATIC_REGISTER(webrtc);  GST_PLUGIN_STATIC_REGISTER(nice);  GST_PLUGIN_STATIC_REGISTER(rtspclientsink);  GST_PLUGIN_STATIC_REGISTER(opengl);  GST_PLUGIN_STATIC_REGISTER(ipcpipeline);  GST_PLUGIN_STATIC_REGISTER(opensles);
  gst_android_load_gio_modules ();
}
