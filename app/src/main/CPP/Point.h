//
// Created by whui on 2019/6/9.
//
#include <string>

#ifndef NDK_POINT_H
#define NDK_POINT_H
using namespace std;

class Point {
private:
    std::string city;
public:
    Point(){};
    void setCity(std::string city);
    std::string getCity();
};


#endif //NDK_POINT_H
