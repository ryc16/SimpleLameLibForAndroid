/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_uraroji_garage_android_lame_SimpleLame */

#ifndef _Included_com_uraroji_garage_android_lame_SimpleLame
#define _Included_com_uraroji_garage_android_lame_SimpleLame
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_uraroji_garage_android_lame_SimpleLame
 * Method:    init
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_uraroji_garage_android_lame_SimpleLame_init
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_uraroji_garage_android_lame_SimpleLame
 * Method:    encode
 * Signature: ([S[SI[B)I
 */
JNIEXPORT jint JNICALL Java_com_uraroji_garage_android_lame_SimpleLame_encode
  (JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray);

/*
 * Class:     com_uraroji_garage_android_lame_SimpleLame
 * Method:    encodeBufferInterleaved
 * Signature: ([SI[B)I
 */
JNIEXPORT jint JNICALL Java_com_uraroji_garage_android_lame_SimpleLame_encodeBufferInterleaved
  (JNIEnv *, jclass, jshortArray, jint, jbyteArray);

/*
 * Class:     com_uraroji_garage_android_lame_SimpleLame
 * Method:    flush
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_uraroji_garage_android_lame_SimpleLame_flush
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_uraroji_garage_android_lame_SimpleLame
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_uraroji_garage_android_lame_SimpleLame_close
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
