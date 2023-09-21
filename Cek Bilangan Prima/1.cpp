// #include <iostream>
// using namespace std;    

//     int main() {

//         int n;

//         cout << "Input satu angka bulat: "; cin >> n;

//         for (int i = 1; i <= n; i++) {
//             if ((i % n == 0) && (n / i+1 == i+1)) {
//                 cout << n << " adalah angka prima" << endl;
//             } else {
//                 continue; 
//             }
//         }

//         return 0;
//     }

#include <iostream> 
using namespace std;

    int main() {

        cout << "##  Program C++ Angka Prima  ##" << endl;
        cout << "===============================" << endl;
        cout << endl;
 
        int n,i;
        bool angka_prima = true;

        cout << "Input satu angka bulat: ";
        cin >> n;

        // 0 dan 1 bukan angka prima
       if (n == 0 || n == 1) {
       angka_prima = false;
        } else {
        for (i = 2; i <= n / 2; i++) {
          if (n % i == 0) {
          angka_prima = false;
          break;
          }
        }
    }

    if (angka_prima == false)
    cout << n << " adalah angka prima" << endl;
    else
    cout << n << " bukan angka prima" << endl;

    cout << endl;
    return 0;
    }