#include <iostream>
using namespace std;

    int main() {

        int besarPersegi;

        cout << "Input besar persegi: ";
        cin >> besarPersegi;

        for (int i = 1; i <= besarPersegi; i++) {
            for (int j = 1; j <= besarPersegi; j++) {
                cout << "* ";
            }
            cout << endl;
        }
        return 0;
    }