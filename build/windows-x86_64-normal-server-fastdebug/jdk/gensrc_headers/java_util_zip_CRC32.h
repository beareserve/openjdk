/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_util_zip_CRC32 */

#ifndef _Included_java_util_zip_CRC32
#define _Included_java_util_zip_CRC32
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     java_util_zip_CRC32
 * Method:    update
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_java_util_zip_CRC32_update
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     java_util_zip_CRC32
 * Method:    updateBytes
 * Signature: (I[BII)I
 */
JNIEXPORT jint JNICALL Java_java_util_zip_CRC32_updateBytes
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint);

/*
 * Class:     java_util_zip_CRC32
 * Method:    updateByteBuffer
 * Signature: (IJII)I
 */
JNIEXPORT jint JNICALL Java_java_util_zip_CRC32_updateByteBuffer
  (JNIEnv *, jclass, jint, jlong, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
