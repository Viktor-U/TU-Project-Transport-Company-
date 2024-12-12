#include "Bus.hpp"
#include <iostream>
#include <cstring>

using namespace std;

Bus::Bus(const char model[20], const char regNumber[20], int productionYear, Driver* driver, const char vignetteExpiryDate[20], char requiredCategory, int seats)
    : Vehicle(model, regNumber, productionYear, driver, vignetteExpiryDate, requiredCategory), seats(seats) {}

void Bus::printInfo() {
    Vehicle::printInfo();
    cout << "Брой места: " << seats << endl;
}
