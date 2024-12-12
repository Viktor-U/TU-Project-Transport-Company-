#include "Driver.hpp"
#include <iostream>
#include <cstring>

using namespace std;

Driver::Driver(const char fullnameI[30], int age, char categoriesI[5])
    : age(age), isAvailable(true) {

        strcpy(fullName, fullnameI);
        strcpy(categories, categoriesI);
}

void Driver::setCourse() {
    isAvailable = false;
}

void Driver::printInfo() {
    cout << "Име: " << fullName << ", Възраст: " << age << ", Категории: ";
    for (int i = 0; i < sizeof(categories); ++i) {
        cout << categories[i] << " ";
    }
    cout << ", Свободен: " << (isAvailable ? "Да" : "Не") << endl;
}
