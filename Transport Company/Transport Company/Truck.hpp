#ifndef Truck_hpp
#define Truck_hpp

#include <stdio.h>
#include "Vehicle.hpp"

class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck();
    Truck(const char* model, const char* regNumber, int productionYear, const char* vignetteExpiryDate, char requiredCategory, int cargoCapacity);

    void printInfo(); 
};

#endif 
