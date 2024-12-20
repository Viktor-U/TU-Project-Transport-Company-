#include "Bus.hpp"
#include <iostream>
#include <cstring>

using namespace std;
Bus::Bus(): Vehicle(), seats(0){};

Bus::Bus(const char* model, const char* regNumber, int productionYear, const char* vignetteExpiryDate, char requiredCategory, int seats)
    : Vehicle(model, regNumber, productionYear, vignetteExpiryDate, requiredCategory), seats(seats) {}

void Bus::printInfo() {
    Vehicle::printInfo();
    cout << "Брой места: " << seats << endl;
}
