//
// Created by whui on 2019/6/9.
//

#include <jni.h>
#include "com_hryt_iov_speech_emptyproaddndk_JNITools.h"

JNIEXPORT jint JNICALL Java_com_hryt_iov_speech_emptyproaddndk_JNITools_addNum
  (JNIEnv *env, jobject obj, jint num1 ,jint num2){
   return num1+num2;
  }