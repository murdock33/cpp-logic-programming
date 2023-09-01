#include <iostream>
using namespace std;

    int main() {

        int lebarDiamond;

        cout << "Input lebar diamond: ";
        cin >> lebarDiamond;

        for (int i = 0; i < lebarDiamond; i++) {
            for (int j = 0; j < lebarDiamond-i; j++) {
                cout << " ";
            }
            for (int k = 0; k <= i; k++) {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i = 1; i <= lebarDiamond; i++) {
            for (int j = 1; j <= i+1; j++) {
                cout << " ";
            }
            for (int k = 1; k <= lebarDiamond-i; k++) {
                cout << "* ";
            }
            cout << endl;
        }

        return 0;
    }