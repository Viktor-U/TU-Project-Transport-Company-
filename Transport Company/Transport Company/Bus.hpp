#ifndef Bus_hpp
#define Bus_hpp

#include <stdio.h>
#include "Vehicle.hpp"

class Bus : public Vehicle {
private:
    int seats;

public:
    Bus(const char model[20], const char regNumber[20], int productionYear, Driver* driver, const char vignetteExpiryDate[20], char requiredCategory, int seats);

    void printInfo(); 
};

#endif 
