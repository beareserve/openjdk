/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_awt_windows_WScrollbarPeer */

#ifndef _Included_sun_awt_windows_WScrollbarPeer
#define _Included_sun_awt_windows_WScrollbarPeer
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_awt_windows_WScrollbarPeer_BANDING_DIVISOR
#define sun_awt_windows_WScrollbarPeer_BANDING_DIVISOR 4.0
/*
 * Class:     sun_awt_windows_WScrollbarPeer
 * Method:    getScrollbarSize
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WScrollbarPeer_getScrollbarSize
  (JNIEnv *, jclass, jint);

/*
 * Class:     sun_awt_windows_WScrollbarPeer
 * Method:    setValues
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WScrollbarPeer_setValues
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     sun_awt_windows_WScrollbarPeer
 * Method:    setLineIncrement
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WScrollbarPeer_setLineIncrement
  (JNIEnv *, jobject, jint);

/*
 * Class:     sun_awt_windows_WScrollbarPeer
 * Method:    setPageIncrement
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WScrollbarPeer_setPageIncrement
  (JNIEnv *, jobject, jint);

/*
 * Class:     sun_awt_windows_WScrollbarPeer
 * Method:    create
 * Signature: (Lsun/awt/windows/WComponentPeer;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WScrollbarPeer_create
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
