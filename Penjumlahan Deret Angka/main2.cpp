#include <iostream>
using namespace std;

    int main() {

        int n, total;

        cout << "Jumlah deret yang diinginkan: ";
        cin >> n;

        int i = 2;
        total = 1;

        cout << 1;

        while(i <= n) {
            cout << " + " << i;
            total = total + i;
            i++;
        }
        cout << " = " << total << endl;

        return 0;
    }