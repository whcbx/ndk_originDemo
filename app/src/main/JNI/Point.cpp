//
// Created by whui on 2019/6/9.
//

#include "Point.h"
#include <iostream>
#include <android/log.h>
#include "android_log.h"

void Point::setCity(std::string city) {
    LOGI("call %s", __FUNCTION__);
    this->city = city;

}

std::string Point::getCity(){
    LOGI("call %s", __FUNCTION__);
    return this->city;
}