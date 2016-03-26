//
// Created by sucer on 2016/3/16.
//
#include "com_myapplication_jni_JniUtil.h"
#include "template.h"
#include <unistd.h>
#include <stdio.h>
#include <jni.h>
#include "moudle/hello.h"
#include <android/log.h>
#include <string.h>
#define   LOG_TAG    "LOG_TEST"
#define   LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)

/*
 * Class:     io_github_yanbober_ndkapplication_NdkJniUtils
 * Method:    getCLanguageString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_myapplication_jni_JniUtil_getCLanguageString
        (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env, "This just a test for Android Studio NDK JNI developer!");
}

JNIEXPORT jint JNICALL Java_com_myapplication_jni_JniUtil_forke
        (JNIEnv *env, jobject obj){

    return fork();
}


JNIEXPORT jint JNICALL Java_com_myapplication_jni_JniUtil_ssum
        (JNIEnv *env, jobject obj, jint in1, jint in2){
    LOGI("log test ok");
    LOGI(JNI_METHOD(JAVA_PACKAGE, JAVA_CLASS, F));
    return sum(in1, in2);
}

