#include "Driver.hpp"
#include <iostream>
#include <cstring>

using namespace std;

Driver::Driver(const char fullnameI[30], int age, const char categoriesI[5])
    : age(age), isAvailable(true) {

        strcpy(fullName, fullnameI);
        strcpy(categories, categoriesI);
}

void Driver::setCourse() {
    isAvailable = false;
}

void Driver::printInfo() {
    cout << "Име: " << fullName << ", Възраст: " << age << ", Категории: ";

        int i = 0;
        while(categories[i] != 0) {
            
            cout << categories[i];
            if (categories[i + 1] !=0) {
                cout<< " ";
            }
            i++;
        }
    
    cout << ", Свободен: " << (isAvailable ? "Да" : "Не") << endl;
}

bool Driver::isQualificated(Vehicle* vehicle){
    char vehicleRequierdCategory = vehicle->getRequiredCategory();
    
    for (int i = 0; i < sizeof(categories); i++) {
        if (categories[i] == vehicleRequierdCategory){
            return true;
        }
    }
    return false;
}
