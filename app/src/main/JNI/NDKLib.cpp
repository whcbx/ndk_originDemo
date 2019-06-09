//
// Created by whui on 2019/6/9.
//

#include <jni.h>
#include "com_hryt_iov_speech_emptyproaddndk_JNITools.h"
#include "Point.h"
#include <iostream>
#include <android/log.h>
#include "android_log.h"

JNIEXPORT jstring JNICALL Java_com_hryt_iov_speech_emptyproaddndk_JNITools_addNum
  (JNIEnv *env, jobject obj, jint num1 ,jint num2){
    Point *point = new Point();
    point->setCity("beijing");
    std::string city = point->getCity();
    cout<< "city :" <<city;
    LOGI("city %s", city.c_str());
    LOGE("city %s", city.c_str());

//   return num1+num2;
    return env->NewStringUTF(city.c_str());
  }