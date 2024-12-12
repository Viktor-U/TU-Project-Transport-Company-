#ifndef Driver_hpp
#define Driver_hpp

#include <stdio.h>
#include "Vehicle.hpp"

class Vehicle;

class Driver {
private:
    char fullName[30];
    int age;
    char categories[5];
    bool isAvailable;

public:
    Driver(const char fullname[30], int age,const char categories[5]);
    bool isQualificated(Vehicle* vehicle);
    void setCourse();
    void printInfo();

};
#endif
