#include <iostream>
using namespace std;

    int main () {
        string namaKaryawan;
        int jamKerja, gajiTotal, uangLembur, upah_per_jam;
        char golongan;

        cout << "Nama karyawan: ";
        getline(cin,namaKaryawan);

        cout << "Golongan(A-D): ";
        cin >> golongan;

        cout << "Jumlah jam kerja: ";
        cin >> jamKerja;

        golongan = toupper(golongan);

        switch (golongan) {
            case 'A':
                upah_per_jam = 5000;
            break;
            case 'B':
                upah_per_jam = 7000;
            break;
            case 'C':
                upah_per_jam = 8000;
            break;
            case 'D':
                upah_per_jam = 10000;
            break;
            default: 
                cout << "Maaf, anda salah memasukan golongan" << endl;
        }

        if (jamKerja > 48) {
            uangLembur = 4000;
        } else if (jamKerja < 48) {
            uangLembur = 0;
        }

        gajiTotal = (upah_per_jam * jamKerja) + ((jamKerja - 48) * uangLembur);
        cout << namaKaryawan << " menerima upah sebesar Rp." << gajiTotal << " per minggu" << endl;

        return 0;
    }