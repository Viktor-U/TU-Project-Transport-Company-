#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <stdio.h>
#include "Driver.hpp"
class Driver;

class Vehicle {
protected:
    char model[20];
    char regNumber[20];
    int productionYear;
    bool isInGarage;
    Driver* driver;
    char vignetteExpiryDate[20];
    char requiredCategory;

public:
    Vehicle();
    Vehicle(const char* model, const char* regNumber, int productionYear, const char* vignetteExpiryDate, char requiredCategory);
    char getRequiredCategory();
    void setDriver(Driver* driverI);
    bool getIsInGarage();
    void goOnTheRoad();
    virtual void printInfo();
    
};

#endif
