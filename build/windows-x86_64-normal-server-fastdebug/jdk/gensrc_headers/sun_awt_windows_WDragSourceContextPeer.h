/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_awt_windows_WDragSourceContextPeer */

#ifndef _Included_sun_awt_windows_WDragSourceContextPeer
#define _Included_sun_awt_windows_WDragSourceContextPeer
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_awt_windows_WDragSourceContextPeer_DISPATCH_ENTER
#define sun_awt_windows_WDragSourceContextPeer_DISPATCH_ENTER 1L
#undef sun_awt_windows_WDragSourceContextPeer_DISPATCH_MOTION
#define sun_awt_windows_WDragSourceContextPeer_DISPATCH_MOTION 2L
#undef sun_awt_windows_WDragSourceContextPeer_DISPATCH_CHANGED
#define sun_awt_windows_WDragSourceContextPeer_DISPATCH_CHANGED 3L
#undef sun_awt_windows_WDragSourceContextPeer_DISPATCH_EXIT
#define sun_awt_windows_WDragSourceContextPeer_DISPATCH_EXIT 4L
#undef sun_awt_windows_WDragSourceContextPeer_DISPATCH_FINISH
#define sun_awt_windows_WDragSourceContextPeer_DISPATCH_FINISH 5L
#undef sun_awt_windows_WDragSourceContextPeer_DISPATCH_MOUSE_MOVED
#define sun_awt_windows_WDragSourceContextPeer_DISPATCH_MOUSE_MOVED 6L
/*
 * Class:     sun_awt_windows_WDragSourceContextPeer
 * Method:    createDragSource
 * Signature: (Ljava/awt/Component;Ljava/awt/datatransfer/Transferable;Ljava/awt/event/InputEvent;I[JLjava/util/Map;)J
 */
JNIEXPORT jlong JNICALL Java_sun_awt_windows_WDragSourceContextPeer_createDragSource
  (JNIEnv *, jobject, jobject, jobject, jobject, jint, jlongArray, jobject);

/*
 * Class:     sun_awt_windows_WDragSourceContextPeer
 * Method:    doDragDrop
 * Signature: (JLjava/awt/Cursor;[IIIII)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WDragSourceContextPeer_doDragDrop
  (JNIEnv *, jobject, jlong, jobject, jintArray, jint, jint, jint, jint);

/*
 * Class:     sun_awt_windows_WDragSourceContextPeer
 * Method:    setNativeCursor
 * Signature: (JLjava/awt/Cursor;I)V
 */
JNIEXPORT void JNICALL Java_sun_awt_windows_WDragSourceContextPeer_setNativeCursor
  (JNIEnv *, jobject, jlong, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
