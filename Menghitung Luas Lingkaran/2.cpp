#include <iostream>
using namespace std;
#define PI 3.14

    float hitungLuasLingkaran(int jariJari) {
        double luas = PI * jariJari * jariJari;
        return luas;
    } 

    int main() {
        int r;

        cout << "Input jari-jari lingkaran: "; cin >> r;
        cout << hitungLuasLingkaran(r) << endl;

        return  0;
    }