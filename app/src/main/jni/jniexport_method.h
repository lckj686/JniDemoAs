/**
 * 手动写的jni 调用头文件
 */
#include <jni.h>
#ifndef _Included_template_h
#define _Included_template_h
#ifdef __cplusplus
extern "C" {
#endif

#include <unistd.h>
#include <stdio.h>

#include <android/log.h>
#include <string.h>
#define   LOG_TAG    "LOG_TEST"
#define   LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)


#define JPACKAGE com_myapplication_jni
#define JCLASS JniUtil
//#define JNI_METHOD(FUN) Java##_##JPACKAGE##_##JCLASS##_##FUN
#define JNI_METHOD(FUN) Java_com_jni_SumNativeUtil_##FUN

//Java_com_myapplication_jni_JniUtil_ssum
JNIEXPORT jint JNICALL JNI_METHOD(ssum)
        (JNIEnv *env, jobject obj, jint in1, jint in2);



#ifdef __cplusplus
}
#endif
#endif
