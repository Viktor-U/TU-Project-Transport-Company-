#include "Vehicle.hpp"
#include <iostream>
#include <cstring>

using namespace std;

Vehicle::Vehicle(const char modelI[20], const char regNumberI[20], int productionYear, Driver* driverI, const char vignetteExpiryDateI[20], char requiredCategory): productionYear(productionYear), requiredCategory(requiredCategory){
    
    strcpy(model, modelI);
    strcpy(regNumber, regNumberI);
    strcpy(vignetteExpiryDate, vignetteExpiryDateI);
    isInGarage = true;
    driver = driverI;
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
