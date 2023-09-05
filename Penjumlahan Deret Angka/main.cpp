#include <iostream>
using namespace std;

    int main() {

        cout << "## Program C++ Penjumlahan Deret ##" << endl;
        cout << "===================================" << endl;

        int i, n, total;

        cout << "Jumlah deret yang diinginkan: ";
        cin >> n; 

        total = 1;
        cout << 1;

        for (int i = 2; i <= n; i++) {
            cout << " + " << i;
            total = total + i;
        }
        cout << " = " << total;

        cout << endl;
        return 0;
    }