#include <iostream> 
using namespace std;

    int main() {

      cout << "## Program C++ Angka Prima ##" << endl;
      cout << "=============================" << endl;
      cout << endl;

      int n,i,pembagi;
      bool angkaPrima = true;

      cout << "Input satu angka bulat: ";
      cin >> n;
      cout << endl;

      // 0 dan 1 bukan angka prima
      if ((n == 1) || (n == 0)) {
        angkaPrima = false;
      }
      else {
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
      }
      else {
        cout << n << " bukan angka prima karena habis dibagi dengan " << pembagi << endl;
      }

    return 0;
    }