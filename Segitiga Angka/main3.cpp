#include <iostream>
#include <iomanip>
using namespace std;

    int main() {

        int n, k;

        cout << "Input tinggi segitiga: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                k++;
                cout << setw(3) << k << ' ';
            }
            cout << endl;
        }

        return 0;
    }