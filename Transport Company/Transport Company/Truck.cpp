#include "Truck.hpp"
#include <iostream>
#include <cstring>

using namespace std;

Truck::Truck(const char model[20], const char regNumber[20], int productionYear, Driver* driver, const char vignetteExpiryDate[20], char requiredCategory, int cargoCapacity)
    : Vehicle(model, regNumber, productionYear, driver, vignetteExpiryDate, requiredCategory), cargoCapacity(cargoCapacity) {}

void Truck::printInfo() {
    Vehicle::printInfo();
    cout << "Полезен товар: " << cargoCapacity << " кг" << endl;
}
