//
// Created by whui on 2019/6/9.
//

#include <jni.h>
#include "com_hryt_iov_speech_emptyproaddndk_JNITools.h"
#include "../CPP/Point.h"
#include <iostream>
#include <android/log.h>
#include "../CPP/android_log.h"

JNIEXPORT jstring JNICALL Java_com_hryt_iov_speech_emptyproaddndk_JNITools_addNum
  (JNIEnv *env, jobject obj, jint num1 ,jint num2){
    Point *point = new Point();
    point->setCity("beijing");
    std::string city = point->getCity();
    LOGI("call %s line :%d city: %s", __FUNCTION__,__LINE__,city.c_str());

//   return num1+num2;
    return env->NewStringUTF(city.c_str());
  }