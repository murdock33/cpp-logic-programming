#include <iostream>
using namespace std;    

    int main() {

        float alas, tinggi, luas;

        cout << "Input alas segitiga: "; cin >> alas;
        cout << "Input tinggi segitiga: "; cin >> tinggi;

        luas = 0.5 * alas * tinggi;

        cout << "Luas segitiga = " << luas << endl;

        return 0;
    }