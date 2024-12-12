#ifndef Truck_hpp
#define Truck_hpp

#include <stdio.h>
#include "Vehicle.hpp"

class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck(const char model[20], const char regNumber[20], int productionYear, Driver* driver, const char vignetteExpiryDate[20], char requiredCategory, int cargoCapacity);

    void printInfo(); 
};

#endif 
