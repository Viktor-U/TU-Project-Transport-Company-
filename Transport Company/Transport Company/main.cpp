#include <iostream>
#include <cstring>
#include "Driver.hpp"
#include "Transport Company.hpp"
#include "Vehicle.hpp"
#include "Truck.hpp"
#include "Bus.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    TransportCompany transportCompany = TransportCompany("TU-Transport company", "ul.obedinenie Dimitrovgrad");
    
    Driver* driver1 = new Driver("Alex Varijski", 19, "BCD");
    Driver* driver2 = new Driver("Viktor Uzunov", 33, "BD");
    Driver* driver3 = new Driver("Roslan Marinov", 56, "BC");
    
    Vehicle* vehicle1 = new Truck("Mercedes", "PB-2505-AM", 2024, "26.06.13", 'C', 30000);
    Vehicle* vehicle2= new Bus("MAN", "CA-0005-CA", 2025, "27.06.13", 'D', 35);
    Vehicle* vehicle3 = new Truck("Honda", "CS-1111-BA", 2005, "24.12.20", 'C', 10000);
    
    transportCompany.addVehicle(vehicle1);
    transportCompany.addVehicle(vehicle2);
    transportCompany.addVehicle(vehicle3);
    
    transportCompany.addDriver(driver1);
    transportCompany.addDriver(driver2);
    transportCompany.addDriver(driver3);
    
    transportCompany.defineTrack(vehicle1, driver1);
    transportCompany.printAllDrivers();
    transportCompany.printFreeVehicles();
    
    
    

    return 0;
}
