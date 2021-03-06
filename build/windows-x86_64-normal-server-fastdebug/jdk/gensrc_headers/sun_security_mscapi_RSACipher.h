/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_security_mscapi_RSACipher */

#ifndef _Included_sun_security_mscapi_RSACipher
#define _Included_sun_security_mscapi_RSACipher
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_security_mscapi_RSACipher_MODE_ENCRYPT
#define sun_security_mscapi_RSACipher_MODE_ENCRYPT 1L
#undef sun_security_mscapi_RSACipher_MODE_DECRYPT
#define sun_security_mscapi_RSACipher_MODE_DECRYPT 2L
#undef sun_security_mscapi_RSACipher_MODE_SIGN
#define sun_security_mscapi_RSACipher_MODE_SIGN 3L
#undef sun_security_mscapi_RSACipher_MODE_VERIFY
#define sun_security_mscapi_RSACipher_MODE_VERIFY 4L
#undef sun_security_mscapi_RSACipher_PAD_PKCS1_LENGTH
#define sun_security_mscapi_RSACipher_PAD_PKCS1_LENGTH 11L
/*
 * Class:     sun_security_mscapi_RSACipher
 * Method:    encryptDecrypt
 * Signature: ([BIJZ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_sun_security_mscapi_RSACipher_encryptDecrypt
  (JNIEnv *, jclass, jbyteArray, jint, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif
