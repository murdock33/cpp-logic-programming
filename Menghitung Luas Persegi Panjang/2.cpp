#include <iostream>
using namespace std;  

    float hitungLuasPersegiPanjang(float lebar, float panjang) {
        return panjang*lebar;
    }

    int main() {

        float p,l;

        cout << "Input panjang persegi: ";
        cin >> p;
        cout << "Input lebar persegi: ";
        cin >> l;

        cout << hitungLuasPersegiPanjang(p,l) << endl;

        return 0;
    }