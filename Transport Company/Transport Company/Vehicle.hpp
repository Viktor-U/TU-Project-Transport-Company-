#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <stdio.h>
#include "Driver.hpp"

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
    Vehicle(const char model[20], const char regNumber[20], int productionYear, Driver* driver, const char vignetteExpiryDate[20], char requiredCategory);
    
    virtual void printInfo();
};

#endif
