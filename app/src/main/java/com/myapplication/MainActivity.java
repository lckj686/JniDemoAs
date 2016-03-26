package com.myapplication;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import com.myapplication.jni.JniUtil;

public class MainActivity extends AppCompatActivity  {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        JniUtil jniUtil = new JniUtil();
        //String s = jniUtil.getCLanguageString();
        int sum = jniUtil.ssum(1,2);
        setContentView(R.layout.activity_main);
//        int pid = jniUtil.forke();
//        String ss = "";
//        if (pid == 0) {
//            ss = "pid = 0 ";
//            Log.d("pid", "=------------");
//        } else {
//            ss = "pid =  " + pid;
//            Log.d("pid", "=------------" + pid);
//        }


        ((TextView) findViewById(R.id.txt)).setText("123"+sum);




    }


}
