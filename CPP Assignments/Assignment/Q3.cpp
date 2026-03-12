#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    float c = 25.0;   // sample Celsius value
    float f = 77.0;   // sample Fahrenheit value

    float fahrenheit = celsiusToFahrenheit(c);
    float celsius = fahrenheitToCelsius(f);

    cout << fixed << setprecision(2);

    cout << "Celsius to Fahrenheit:" << endl;
    cout << c << " C = " << fahrenheit << " F" << endl;

    cout << "\nFahrenheit to Celsius:" << endl;
    cout << f << " F = " << celsius << " C" << endl;

    return 0;
}

// Function Definitions

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}