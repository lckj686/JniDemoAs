package com.myapplication.jni;

/**
 * Created by sucer on 2016/3/16.
 */
public class JniUtil {
    static {
        System.loadLibrary("YanboberJniLibName");   //defaultConfig.ndk.moduleName
    }

    public native String getCLanguageString();

    public native int forke();

    public native int ssum(int in1, int in2);
}
