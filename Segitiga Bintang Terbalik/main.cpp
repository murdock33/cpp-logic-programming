#include <iostream>
using namespace std;

    int main() {

        int tinggiSegitiga;

        cout << "Input tinggi segitiga: ";
        cin >> tinggiSegitiga;

        for (int i = 0; i < tinggiSegitiga; i++) {
            for (int j = 1; j <= tinggiSegitiga-i; j++) {
                cout << "* ";
            }
            cout << endl;
        }

        return 0;
    }