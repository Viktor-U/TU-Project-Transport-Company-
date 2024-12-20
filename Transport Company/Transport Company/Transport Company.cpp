#include "Transport Company.hpp"
#include <iostream>

TransportCompany::TransportCompany(){
    vehicleAmount = 0;
    driversAmount = 0;
    strcpy(name, "");
    strcpy(address, "");
}
TransportCompany::TransportCompany(const char* nameI, const char* addressI){
    strcpy(name, nameI);
    strcpy(address,addressI);
    vehicleAmount = 0;
    driversAmount = 0;

}


void TransportCompany::addVehicle(Vehicle* vi){
    if (vehicleAmount >= 10)
    {
        cout << "Не е позволено добавянето на повече моторни превозни средства.";
        return;
    }
    vArr[vehicleAmount] = vi;
    vehicleAmount++;
}

void TransportCompany::addDriver(Driver* dr){
    if (driversAmount >= 10)
    {
        cout << "Не е позволено добавянето на повече шофьори.";
        return;
    }
    dArr[driversAmount] = dr;
    driversAmount++;
}

void TransportCompany::defineTrack(Vehicle* vi, Driver* dr){

    if (dr->isQualificated(vi)){
        vi->goOnTheRoad();
        dr->setCourse();
        vi->setDriver(dr);
    }

    
}
void TransportCompany::printFreeVehicles(){
    for (int i = 0; i < vehicleAmount; i++){
        if (vArr[i]->getIsInGarage()){
            cout << "------------------------"<< endl;
            vArr[i]->printInfo();
        }
    }
}

void TransportCompany::printAllDrivers(){
    for (int i = 0; i < driversAmount ; i++) {
        dArr[i]->printInfo();
    }
}

