package com.myapplication;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.widget.TextView;

import com.jni.ForkNativeUtil;
import com.jni.SumNativeUtil;

public class MainActivity extends AppCompatActivity  {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        ForkNativeUtil jniUtil = new ForkNativeUtil();


        //String s = jniUtil.getCLanguageString();

        setContentView(R.layout.activity_main);

        int pid = jniUtil.forke();
        String ss = "";
        if (pid == 0) {
            ss = "pid = 0 ";
            Log.d("pid", "=------------");
        } else {
            ss = "pid =  " + pid;
            Log.d("pid", "=------------" + pid);
        }


        SumNativeUtil sumNativeUtil = new SumNativeUtil();
        int sum = sumNativeUtil.ssum(1,2);
        ((TextView) findViewById(R.id.txt)).setText("123"+sum);


    }


}
