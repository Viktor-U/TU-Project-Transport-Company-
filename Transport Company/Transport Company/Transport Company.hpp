//
//  Transport Company.hpp
//  Transport Company
//
//  Created by Viktor Uzunov on 10.12.24.
//

#ifndef Transport_Company_hpp
#define Transport_Company_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class TransportCompany{
protected:
    char name[20];
    char addres[20];
    //do array wiht Vehicle
    int vehicleAmount;
    //do array wiht Drivers
    int driversAmount;

    
    
public:
    TransportCompany();
    TransportCompany(const char nameI[20], const char addresI[20] );
    //void addVehicle() to do
    //void addDriver() to do
    //void defineTrack() to do
    //void printFreeVehicles() to do
    
};


#endif /* Transport_Company_hpp */
