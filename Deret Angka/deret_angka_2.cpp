#include <iostream>
using namespace std;

    int main() {

        int n;

        cout << " Jumlah deret yang diinginkan: ";
        cin >> n;

            for (int j = 3; j <= n*3; j += 3) {
                cout << j << " ";
            }

        return 0;
    }