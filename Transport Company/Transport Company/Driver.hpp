#ifndef Driver_hpp
#define Driver_hpp

#include <stdio.h>

class Driver {
private:
    char fullName[30];
    int age;
    char categories[5];
    bool isAvailable;

public:
    Driver(const char fullname[30], int age, char categories[5]);
    void setCourse();
    void printInfo();

};
#endif
