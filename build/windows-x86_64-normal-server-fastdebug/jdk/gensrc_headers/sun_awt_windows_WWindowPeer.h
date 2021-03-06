/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_awt_windows_WWindowPeer */

#ifndef _Included_sun_awt_windows_WWindowPeer
#define _Included_sun_awt_windows_WWindowPeer
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_awt_windows_WWindowPeer_BANDING_DIVISOR
#define sun_awt_windows_WWindowPeer_BANDING_DIVISOR 4.0
/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    _toFront
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer__1toFront
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    toBack
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_toBack
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    setAlwaysOnTopNative
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_setAlwaysOnTopNative
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    setFocusableWindow
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_setFocusableWindow
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    _setTitle
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer__1setTitle
  (JNIEnv *, jobject, jstring);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    _setResizable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer__1setResizable
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    createAwtWindow
 * Signature: (Lsun/awt/windows/WComponentPeer;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_createAwtWindow
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    updateInsets
 * Signature: (Ljava/awt/Insets;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_updateInsets
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    getSysMinWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WWindowPeer_getSysMinWidth
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    getSysMinHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WWindowPeer_getSysMinHeight
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    getSysIconWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WWindowPeer_getSysIconWidth
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    getSysIconHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WWindowPeer_getSysIconHeight
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    getSysSmIconWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WWindowPeer_getSysSmIconWidth
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    getSysSmIconHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WWindowPeer_getSysSmIconHeight
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    setIconImagesData
 * Signature: ([III[III)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_setIconImagesData
  (JNIEnv *, jobject, jintArray, jint, jint, jintArray, jint, jint);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    reshapeFrame
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_reshapeFrame
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    requestWindowFocus
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_sun_awt_windows_WWindowPeer_requestWindowFocus
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    setMinSize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_setMinSize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    modalDisable
 * Signature: (Ljava/awt/Dialog;J)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_modalDisable
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    modalEnable
 * Signature: (Ljava/awt/Dialog;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_modalEnable
  (JNIEnv *, jobject, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    getScreenImOn
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_windows_WWindowPeer_getScreenImOn
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    setFullScreenExclusiveModeState
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_setFullScreenExclusiveModeState
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    nativeGrab
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_nativeGrab
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    nativeUngrab
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_nativeUngrab
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    repositionSecurityWarning
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_repositionSecurityWarning
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    setOpacity
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_setOpacity
  (JNIEnv *, jobject, jint);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    setOpaqueImpl
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_setOpaqueImpl
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     sun_awt_windows_WWindowPeer
 * Method:    updateWindowImpl
 * Signature: ([III)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WWindowPeer_updateWindowImpl
  (JNIEnv *, jobject, jintArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
