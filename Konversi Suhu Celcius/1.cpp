#include <iostream>
using namespace std;

    int main() {
        double c,f,k,r;

        cout << "Input suhu celsius: "; cin >> c;
        cout << endl;

        f = (9.0/5.0) * c + 32;
        k = c + 273.15;
        r = (4.0/5.0) * c;

        cout << c << " derajat Celcius = " << f << " derajat Fahrenheit" << endl;
        cout << c << " derajat Celcius = " << k << " derajat Kelvin" << endl;
        cout << c << " derajat Celcius = " << r << " derajat Reamur" << endl;

        return 0;
    }