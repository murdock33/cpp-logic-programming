#include <iostream>
using namespace std;

    int main() {

        int tahun;

        cout << "Input tahun: ";
        cin >> tahun;

        if (tahun % 400 == 0) {
            cout << tahun << " adalah tahun kabisat" << endl;
        } else if ((tahun % 400 != 0) && (tahun % 100 == 0)) {
            cout << tahun << " bukan tahun kabisat" << endl;
        } else if ((tahun % 400 != 0) && (tahun % 100 != 0) && (tahun % 4 == 0)) {
            cout << tahun << " adalah tahun kabisat" << endl;
        } else if ((tahun % 400 != 0) && (tahun % 100 != 0) && (tahun % 4 != 0)) {
            cout << tahun << " bukan tahun kabisat" << endl;
        }

        return 0;
    }