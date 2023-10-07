#include <iostream>
#include <iomanip>

class TemperatureConverter {
private:
    double celsius;

public:
    void setInput(double c) {
        celsius = c;
    }

    double getCelsius() {
        return celsius;
    }

    double getFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }

    double getKelvin() {
        return celsius + 273.15;
    }
};

int main() {
    TemperatureConverter converter;
    double celsius;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    converter.setInput(celsius);

    double fahrenheit = converter.getFahrenheit();
    double kelvin = converter.getKelvin();

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Temperature in Celsius: " << converter.getCelsius() << std::endl;
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Temperature in Kelvin: " << kelvin << std::endl;

    return 0;
}
