#include <iostream>
using namespace std;

    int main() {

        int tinggiPersegi, lebarPersegi;

        cout << "Input tinggi persegi: ";
        cin >> tinggiPersegi;
        cout << "Input lebar persegi: ";
        cin >> lebarPersegi;
        cout << endl;

        for (int i = 1; i <= tinggiPersegi; i++) {
            for (int j = 1; j <= lebarPersegi; j++) {
                cout << "* ";
            }
            cout << endl;
        }


        return 0;
    }