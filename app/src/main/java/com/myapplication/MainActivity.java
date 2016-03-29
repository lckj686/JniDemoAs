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
        ForkNativeUtil jniUtil = new ForkNativeUtil();
        int pid = jniUtil.forke();
        String ss = "";
        if (pid == 0) {
            ss = "pid = 0 ";
            Log.d("pid123", "=-----000000-------");
        } else {
            ss = "pid =  " + pid;
            Log.d("pid123", "=------------" + pid);
        }

        super.onCreate(savedInstanceState);


        //String s = jniUtil.getCLanguageString();

        setContentView(R.layout.activity_main);




        SumNativeUtil sumNativeUtil = new SumNativeUtil();
        int sum = sumNativeUtil.ssum(1,2);
        ((TextView) findViewById(R.id.txt)).setText("123"+sum);


    }


}
