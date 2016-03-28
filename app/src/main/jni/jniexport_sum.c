//
// Created by sucer on 2016/3/29.
//

#include "sum/sum_demo.h"
#include "jniexport_method.h"

JNIEXPORT jint JNICALL JNI_METHOD(ssum)
        (JNIEnv *env, jobject obj, jint in1, jint in2){
    LOGI("log test ok");
    return sum(in1, in2);
}

