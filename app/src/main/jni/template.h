/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_myapplication_jni_JniUtil */

#ifndef _Included_template_h
#define _Included_template_h
#ifdef __cplusplus
extern "C" {
#endif

#define JAVA_PACKAGE com_myapplication_jni
#define JAVA_CLASS JniUtil
#define JNI_METHOD(FUN) Java_##JAVA_PACKAGE_##JAVA_CLASS_##FUN
#define F f

JNIEXPORT jint JNICALL Java_com_myapplication_jni_JniUtil_ssum
        (JNIEnv *env, jobject obj, jint in1, jint in2);


#ifdef __cplusplus
}
#endif
#endif