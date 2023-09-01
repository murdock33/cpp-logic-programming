#include <iostream>
using namespace std;

    int main() {

        int tinggiPiramida;

        cout << "Input tinggi piramida: ";
        cin >> tinggiPiramida;

        for (int i = 1; i <= tinggiPiramida; i++) {
            for (int j = 1; j <= tinggiPiramida+1-i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= i; k++) {
                cout << "* ";
            }
            cout << endl;
        }

        return 0;
    }