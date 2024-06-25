#include <iostream>

using namespace std;

int main()
{
    float temp_value;
    string temp_unit;
    //Instructions
    cout << "------------- Temperautre Conversion Program -------------\n";
    cout << "- Enter the temperautre value, and the measurement unit  -\n";
    cout << "- The measurement units: Celsius, Fahrenheit, and Kelvin -\n";
    cout << "- For a measurement unit, enter the first character.\nEx: Celsius, 'c'\n";
    //variables input
    cout << "Enter temperature value: ";
    cin >> temp_value;
    cout << "Enter temperauter unit: ";
    cin >> temp_unit;
    //conditions
    //celsius
    if ((temp_unit.compare("c")) == 0)
    {
        cout << "Kelvin: " << temp_value + 273 << endl;
        cout << "Fahrenheit: " << (1.8 * temp_value) + 32 << endl;
    }
    //Fahrenheit
    else if ((temp_unit.compare("f")) == 0)
    {
        cout << "Celsius: " << (temp_value - 32)/1.8 << endl;
        cout << "Kelvin: " << ((temp_value - 32)/1.8) + 273 << endl;
    }
    //Kelvin
    else if ((temp_unit.compare("k")) == 0)
    {
        cout << "Celsius: " << temp_value - 273 << endl;
        cout << "Fahrenheit: " << (1.8 * (temp_value - 273)) + 32 << endl;
    }

    return 0;
}