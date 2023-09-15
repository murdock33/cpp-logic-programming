#include <iostream>
using namespace std;    

    int main() {

        float panjang,lebar,luas;

        cout << "Input panjang persegi: ";
        cin >> panjang;
        cout << "Input lebar persegi: ";
        cin >> lebar;

        luas = panjang*lebar;
        cout << "Luas persegi panjang = " << luas << endl;

        return 0;
    }