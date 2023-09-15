#include <iostream>
using namespace std;    

    float hitungLuasSegitiga(float alas, float tinggi) {
        float luas = 0.5 * alas * tinggi;
        return luas;
    }

    int main() {

        float a, t;

        cout << "Input alas segitiga: "; cin >> a;
        cout << "Input tinggi segitiga: "; cin >> t;

        cout << hitungLuasSegitiga(a,t) << endl;

        return 0;
    }