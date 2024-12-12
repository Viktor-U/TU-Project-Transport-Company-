#ifndef Transport_Company_hpp
#define Transport_Company_hpp

#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "Driver.hpp"

using namespace std;


class TransportCompany{
protected:
    char name[20];
    char address[20];
    Vehicle* vArr[10];
    int vehicleAmount;
    Driver* dArr[10];
    int driversAmount;
    
    
public:
    TransportCompany();
    TransportCompany(const char nameI[20], const char addresI[20] );
    void addVehicle(Vehicle* vi);
    void addDriver(Driver* dr);
    void defineTrack(Vehicle* vi, Driver* dr);
    void printFreeVehicles();
    void printAllDrivers();

    
};


#endif 
