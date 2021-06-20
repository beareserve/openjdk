/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_java2d_opengl_WGLGraphicsConfig */

#ifndef _Included_sun_java2d_opengl_WGLGraphicsConfig
#define _Included_sun_java2d_opengl_WGLGraphicsConfig
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     sun_java2d_opengl_WGLGraphicsConfig
 * Method:    getDefaultPixFmt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_sun_java2d_opengl_WGLGraphicsConfig_getDefaultPixFmt
  (JNIEnv *, jclass, jint);

/*
 * Class:     sun_java2d_opengl_WGLGraphicsConfig
 * Method:    initWGL
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_sun_java2d_opengl_WGLGraphicsConfig_initWGL
  (JNIEnv *, jclass);

/*
 * Class:     sun_java2d_opengl_WGLGraphicsConfig
 * Method:    getWGLConfigInfo
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_sun_java2d_opengl_WGLGraphicsConfig_getWGLConfigInfo
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     sun_java2d_opengl_WGLGraphicsConfig
 * Method:    getOGLCapabilities
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_sun_java2d_opengl_WGLGraphicsConfig_getOGLCapabilities
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif