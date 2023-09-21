#include <iostream>
using namespace std;    

    int main() {

        int n, pembagi;
        bool angkaPrima = true;

        cout << "Input satu angka bulat: "; cin >> n;

        if ((n == 0) || (n == 1)) {
            angkaPrima = false;
        } else {
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    pembagi = i;
                    angkaPrima = false;
                    break;
                }
            }
        }
        if (angkaPrima) {
            cout << n << " adalah angka prima" << endl;
        } else {
            cout << n << " bukan angka prima karena habis dibagi " << pembagi << endl;
        }

        return 0;
    }