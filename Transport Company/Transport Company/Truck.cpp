#include "Truck.hpp"
#include <iostream>
#include <cstring>

using namespace std;

Truck::Truck(){
    strcpy(model, "");
    strcpy(regNumber, "");
    strcpy(vignetteExpiryDate, "");
    isInGarage = true;
    driver = nullptr;
    cargoCapacity = 0;
}

Truck::Truck(const char model[20], const char regNumber[20], int productionYear, const char vignetteExpiryDate[20], char requiredCategory, int cargoCapacity)
    : Vehicle(model, regNumber, productionYear, vignetteExpiryDate, requiredCategory), cargoCapacity(cargoCapacity) {}

void Truck::printInfo() {
    Vehicle::printInfo();
    cout << "Полезен товар: " << cargoCapacity << " кг" << endl;
}
