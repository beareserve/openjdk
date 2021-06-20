/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_awt_windows_WTextComponentPeer */

#ifndef _Included_sun_awt_windows_WTextComponentPeer
#define _Included_sun_awt_windows_WTextComponentPeer
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_awt_windows_WTextComponentPeer_BANDING_DIVISOR
#define sun_awt_windows_WTextComponentPeer_BANDING_DIVISOR 4.0
/*
 * Class:     sun_awt_windows_WTextComponentPeer
 * Method:    getText
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sun_awt_windows_WTextComponentPeer_getText
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WTextComponentPeer
 * Method:    setText
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WTextComponentPeer_setText
  (JNIEnv *, jobject, jstring);

/*
 * Class:     sun_awt_windows_WTextComponentPeer
 * Method:    getSelectionStart
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WTextComponentPeer_getSelectionStart
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WTextComponentPeer
 * Method:    getSelectionEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WTextComponentPeer_getSelectionEnd
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WTextComponentPeer
 * Method:    select
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WTextComponentPeer_select
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     sun_awt_windows_WTextComponentPeer
 * Method:    enableEditing
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WTextComponentPeer_enableEditing
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_awt_windows_WTextComponentPeer
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WTextComponentPeer_initIDs
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif