/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_nio_ch_WindowsAsynchronousFileChannelImpl */

#ifndef _Included_sun_nio_ch_WindowsAsynchronousFileChannelImpl
#define _Included_sun_nio_ch_WindowsAsynchronousFileChannelImpl
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_nio_ch_WindowsAsynchronousFileChannelImpl_ERROR_HANDLE_EOF
#define sun_nio_ch_WindowsAsynchronousFileChannelImpl_ERROR_HANDLE_EOF 38L
#undef sun_nio_ch_WindowsAsynchronousFileChannelImpl_NO_LOCK
#define sun_nio_ch_WindowsAsynchronousFileChannelImpl_NO_LOCK -1L
#undef sun_nio_ch_WindowsAsynchronousFileChannelImpl_LOCKED
#define sun_nio_ch_WindowsAsynchronousFileChannelImpl_LOCKED 0L
/*
 * Class:     sun_nio_ch_WindowsAsynchronousFileChannelImpl
 * Method:    readFile
 * Signature: (JJIJJ)I
 */
JNIEXPORT jint JNICALL Java_sun_nio_ch_WindowsAsynchronousFileChannelImpl_readFile
  (JNIEnv *, jclass, jlong, jlong, jint, jlong, jlong);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousFileChannelImpl
 * Method:    writeFile
 * Signature: (JJIJJ)I
 */
JNIEXPORT jint JNICALL Java_sun_nio_ch_WindowsAsynchronousFileChannelImpl_writeFile
  (JNIEnv *, jclass, jlong, jlong, jint, jlong, jlong);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousFileChannelImpl
 * Method:    lockFile
 * Signature: (JJJZJ)I
 */
JNIEXPORT jint JNICALL Java_sun_nio_ch_WindowsAsynchronousFileChannelImpl_lockFile
  (JNIEnv *, jclass, jlong, jlong, jlong, jboolean, jlong);

/*
 * Class:     sun_nio_ch_WindowsAsynchronousFileChannelImpl
 * Method:    close0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_nio_ch_WindowsAsynchronousFileChannelImpl_close0
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
