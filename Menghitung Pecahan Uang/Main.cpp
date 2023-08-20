#include <iostream>
using namespace std;

    int main() {
        unsigned int uang, sisa;
        unsigned int seratusRibu, limaPuluhribu, duaPuluhribu, sepuluhRibu;
        unsigned int limaRibu, duaRibu, seribu, limaRatus, seratus;

        cout << "## Program Menghitung Pecahan Uang ##" << endl;
        cout << "======================================" << endl;
        cout << endl;

        cout << "Input nominal uang: ";
        cin >> uang;

        seratusRibu = uang / 100'000;
        sisa = uang - (seratusRibu * 100'000);
       
        limaPuluhribu = sisa / 50'000;
        sisa = sisa - (limaPuluhribu * 50'000);

        duaPuluhribu = sisa / 20'000;
        sisa = sisa - (duaPuluhribu * 20'000);
        
        sepuluhRibu = sisa / 10'000;
        sisa = sisa - (sepuluhRibu * 10'000);
        
        limaRibu = sisa / 5'000;
        sisa = sisa - (limaRibu * 5'000);
        
        duaRibu = sisa / 2'000;
        sisa = sisa - (duaRibu * 2'000);
        
        seribu = sisa / 1'000;
        sisa = sisa - (seribu * 1'000);
        
        limaRatus = sisa / 500;
        sisa = sisa - (limaRatus * 500);
        
        seratus = sisa / 100;
        sisa = sisa - (seratus * 100);
        
        sisa = sisa;
        

        cout << endl;
        cout << "Detail Pecahan: " << endl;
        cout << "Pecahan 100.000 = " << seratusRibu << " lembar" << endl;
       cout << "Pecahan 50.000  = " << limaPuluhribu << " lembar" << endl;
       cout << "Pecahan 20.000  = " << duaPuluhribu << " lembar" << endl;
       cout << "Pecahan 10.000  = " << sepuluhRibu << " lembar" << endl;
       cout << "Pecahan 5.000   = " << limaRibu << " lembar" << endl;
       cout << "Pecahan 2.000   = " << duaRibu << " lembar" << endl;
       cout << "Pecahan 1.000   = " << seribu << " lembar" << endl;
       cout << "Pecahan 500     = " << limaRatus << " lembar" << endl;
        cout << "Pecahan 100     = " << seratus << " lembar" << endl; 
        cout <<  "Sisa            = " << sisa << endl;
 
        return 0;
    }