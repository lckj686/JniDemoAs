package com.jni;

/**
 * Created by sucer on 2016/3/16.
 */
public class ForkNativeUtil {
    static {
        System.loadLibrary("YanboberJniLibName");   //defaultConfig.ndk.moduleName
    }


    public native int forke();


}
