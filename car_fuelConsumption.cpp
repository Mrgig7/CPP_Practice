// You are using GCC
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

class Car{
    private:
    string brand;
    double fuelConsumption;
    
    public:
    Car(const string& b, double fc) : brand (b), fuelConsumption(fc) {}
    
    friend double calculateFuelCost(const Car& car, double distance, double fuelPrice);
};

double calculateFuelCost(const Car& car, double distance, double fuelPrice){
    double fuelConsumed = (car.fuelConsumption/100.0)*distance;
    double totalFuelCost = fuelConsumed * fuelPrice;
    return totalFuelCost;
}

int main(){
    string brand;
    double fuelConsumption, distance, fuelPrice;
    
    getline(cin, brand);
    cin>>fuelConsumption>>distance>>fuelPrice;
    
    Car car(brand, fuelConsumption);
    
    double fuelCost = calculateFuelCost(car, distance,fuelPrice);
    
    cout<<fixed<<setprecision(2)<<fuelCost<<endl;
    return 0;
    
}