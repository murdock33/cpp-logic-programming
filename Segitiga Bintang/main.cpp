#include <iostream>
using namespace std;

    int main() {

        int tinggiSegitiga;

        cout << "Input tinggi segitiga: ";
        cin >> tinggiSegitiga;
        cout << endl;

        for (int i = 1; i <= tinggiSegitiga; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }

        return 0;
    }