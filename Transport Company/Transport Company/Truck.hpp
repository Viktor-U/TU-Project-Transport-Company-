#ifndef Truck_hpp
#define Truck_hpp

#include <stdio.h>
#include "Vehicle.hpp"

class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck();
    Truck(char* model, char* regNumber, int productionYear, char* vignetteExpiryDate, char requiredCategory, int cargoCapacity);

    void printInfo(); 
};

#endif 
