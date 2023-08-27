#include <iostream>
using namespace std;

    int main() {
        int hargaAsli, hargaDiskon;

        cout << "Total belanja: Rp. ";
        cin >> hargaAsli;
        cout << endl;

        if (hargaAsli < 100'000) {
            hargaDiskon = hargaAsli;
        } else if ((hargaAsli >= 100'000) && (hargaAsli <= 500'000)) {
            hargaDiskon = hargaAsli - (hargaAsli * 0.1);
            cout << "Selamat, anda mendapat diskon 10%" << endl;
        } else if ((hargaAsli > 500'000) && (hargaAsli <= 1'000'000)) {
            hargaDiskon = hargaAsli - (hargaAsli * 0.2);
            cout << "Selamat, anda mendapatkan diskon 20%" << endl;
        } else if ((hargaAsli > 1'000'000)) {
            hargaDiskon = hargaAsli - (hargaAsli * 0.3);
            cout << "Selamat, anda mendapatkan diskon 30%" << endl;
        }

        cout << "Total bayar: Rp. " << hargaDiskon << endl;

        return 0;
    }

