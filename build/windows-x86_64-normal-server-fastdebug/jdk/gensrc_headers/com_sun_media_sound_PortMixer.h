/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sun_media_sound_PortMixer */

#ifndef _Included_com_sun_media_sound_PortMixer
#define _Included_com_sun_media_sound_PortMixer
#ifdef __cplusplus
extern "C" {
#endif
#undef com_sun_media_sound_PortMixer_PCM
#define com_sun_media_sound_PortMixer_PCM 0L
#undef com_sun_media_sound_PortMixer_ULAW
#define com_sun_media_sound_PortMixer_ULAW 1L
#undef com_sun_media_sound_PortMixer_ALAW
#define com_sun_media_sound_PortMixer_ALAW 2L
#undef com_sun_media_sound_PortMixer_SRC_UNKNOWN
#define com_sun_media_sound_PortMixer_SRC_UNKNOWN 1L
#undef com_sun_media_sound_PortMixer_SRC_MICROPHONE
#define com_sun_media_sound_PortMixer_SRC_MICROPHONE 2L
#undef com_sun_media_sound_PortMixer_SRC_LINE_IN
#define com_sun_media_sound_PortMixer_SRC_LINE_IN 3L
#undef com_sun_media_sound_PortMixer_SRC_COMPACT_DISC
#define com_sun_media_sound_PortMixer_SRC_COMPACT_DISC 4L
#undef com_sun_media_sound_PortMixer_SRC_MASK
#define com_sun_media_sound_PortMixer_SRC_MASK 255L
#undef com_sun_media_sound_PortMixer_DST_UNKNOWN
#define com_sun_media_sound_PortMixer_DST_UNKNOWN 256L
#undef com_sun_media_sound_PortMixer_DST_SPEAKER
#define com_sun_media_sound_PortMixer_DST_SPEAKER 512L
#undef com_sun_media_sound_PortMixer_DST_HEADPHONE
#define com_sun_media_sound_PortMixer_DST_HEADPHONE 768L
#undef com_sun_media_sound_PortMixer_DST_LINE_OUT
#define com_sun_media_sound_PortMixer_DST_LINE_OUT 1024L
#undef com_sun_media_sound_PortMixer_DST_MASK
#define com_sun_media_sound_PortMixer_DST_MASK 65280L
/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nOpen
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_media_sound_PortMixer_nOpen
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sun_media_sound_PortMixer_nClose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nGetPortCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_media_sound_PortMixer_nGetPortCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nGetPortType
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_sun_media_sound_PortMixer_nGetPortType
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nGetPortName
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_media_sound_PortMixer_nGetPortName
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nGetControls
 * Signature: (JILjava/util/Vector;)V
 */
JNIEXPORT void JNICALL Java_com_sun_media_sound_PortMixer_nGetControls
  (JNIEnv *, jclass, jlong, jint, jobject);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nControlSetIntValue
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_sun_media_sound_PortMixer_nControlSetIntValue
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nControlGetIntValue
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_media_sound_PortMixer_nControlGetIntValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nControlSetFloatValue
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_sun_media_sound_PortMixer_nControlSetFloatValue
  (JNIEnv *, jclass, jlong, jfloat);

/*
 * Class:     com_sun_media_sound_PortMixer
 * Method:    nControlGetFloatValue
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_sun_media_sound_PortMixer_nControlGetFloatValue
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
