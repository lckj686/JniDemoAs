package com.jni;

/**
 * Created by sucer on 2016/3/29.
 */
public class SumNativeUtil {
    static {
        System.loadLibrary("YanboberJniLibName");   //defaultConfig.ndk.moduleName
    }


    public native int ssum(int in1, int in2);

}
