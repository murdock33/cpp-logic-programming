#include <iostream>
using namespace std;
#define PI 3.14   

    int main() {

        float r, luas;

        cout << "Input jari-jari lingkaran: "; cin >> r;

        luas = PI*r*r;

        cout << "Luas lingkaran = " << luas << endl;

        return 0;
    }