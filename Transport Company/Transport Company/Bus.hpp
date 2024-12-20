#ifndef Bus_hpp
#define Bus_hpp

#include <stdio.h>
#include "Vehicle.hpp"

class Bus : public Vehicle {
private:
    int seats;

public:
    Bus();
    Bus(char* model, char* regNumber, int productionYear, char* vignetteExpiryDate, char requiredCategory, int seats);

    void printInfo(); 
};

#endif 
