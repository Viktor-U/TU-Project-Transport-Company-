#ifndef Bus_hpp
#define Bus_hpp

#include <stdio.h>
#include "Vehicle.hpp"

class Bus : public Vehicle {
private:
    int seats;

public:
    Bus();
    Bus(const char* model, const char* regNumber, int productionYear, const char* vignetteExpiryDate, char requiredCategory, int seats);

    void printInfo(); 
};

#endif 
