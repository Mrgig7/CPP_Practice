#include <iostream>
#include <iomanip>
using namespace std;

class TemperatureConvertor(){
    private:
        double celsius;
    public:
        void setInput(double c){
            celsius = c;
        }
        double getCelsius(){
            return celsius;
        }
        double getFahrenheit(){
            return (celsius * 9 / 5) + 32;
        }
        double getKelvin(){
            return celsius + 273.15;
        }

    


};