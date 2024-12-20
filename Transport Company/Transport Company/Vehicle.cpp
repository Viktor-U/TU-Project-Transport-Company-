#include "Vehicle.hpp"
#include <iostream>
#include <cstring>

using namespace std;

Vehicle::Vehicle(){
    strcpy(model, "");
    strcpy(regNumber, "");
    strcpy(vignetteExpiryDate, "");
    isInGarage = true;
    driver = nullptr;
}

Vehicle::Vehicle(char* modelI,char* regNumberI, int productionYear,char* vignetteExpiryDateI, char requiredCategory): productionYear(productionYear), requiredCategory(requiredCategory){
    
    strcpy(model, modelI);
    strcpy(regNumber, regNumberI);
    strcpy(vignetteExpiryDate, vignetteExpiryDateI);
    isInGarage = true;
    driver = nullptr;
}

void Vehicle::printInfo() {
    cout << "Модел: " << model << endl;
    cout << "Рег. номер: " << regNumber << endl;
    cout << "Година на производство: " << productionYear << endl;
    cout << "В гаража: " << (isInGarage ? "Да" : "Не") << endl;

    if (driver != nullptr) {
        cout << "Шофьор: " << endl;
        driver->printInfo();
    } else {
        cout << "Няма свързан шофьор." << endl;
    }
    cout << "Винетка валидна до: " << vignetteExpiryDate << endl;
    cout << "Необходими категории: " << requiredCategory << endl;
}

char Vehicle::getRequiredCategory(){
    return requiredCategory;
}

bool Vehicle::getIsInGarage(){
    return isInGarage;
}
void Vehicle::goOnTheRoad(){
    isInGarage=false;
}


void Vehicle::setDriver(Driver* driverI){
    driver = driverI;
}
