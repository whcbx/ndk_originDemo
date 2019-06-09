package com.hryt.iov.speech.emptyproaddndk;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static{
        System.loadLibrary("native-lib");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

//        int num = addNum(12);
//        Toast.makeText(getApplicationContext(),"sdfsdf "+num,Toast.LENGTH_SHORT).show();
        // Example of a call to a native method
        TextView tv = findViewById(R.id.displayNativeString);
        tv.setText(JNITools.addNum(12,13) + "" );
    }


}
