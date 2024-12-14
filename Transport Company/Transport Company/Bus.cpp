#include "Bus.hpp"
#include <iostream>
#include <cstring>

using namespace std;
Bus::Bus(): Vehicle(), seats(0){};

Bus::Bus(const char model[20], const char regNumber[20], int productionYear, const char vignetteExpiryDate[20], char requiredCategory, int seats)
    : Vehicle(model, regNumber, productionYear, vignetteExpiryDate, requiredCategory), seats(seats) {}

void Bus::printInfo() {
    Vehicle::printInfo();
    cout << "Брой места: " << seats << endl;
}
