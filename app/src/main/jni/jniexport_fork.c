//
// Created by sucer on 2016/3/16.
//
#include "com_jni_ForkNativeUtil.h"
#include "jniexport_method.h"


JNIEXPORT jint JNICALL Java_com_jni_ForkNativeUtil_forke
        (JNIEnv *env, jobject obj){

    return fork();
}






