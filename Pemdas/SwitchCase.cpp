#include <bits/stdc++.h>  //library (almost) universal

using namespace std;

int main() {
    int pilihan;
    cout << "1. Menghitung luas dan keliling persegi panjang" << endl;
    cout << "2. Menghitung luas dan keliling lingkaran" << endl;
    cout << "3. Menghitung luas dan keliling segitiga (siku-siku)" << endl;
    cout << "Pilihan anda: ";
    cin >> pilihan;

    const float PI = 3.14159;

    cout << fixed << setprecision(2); 

    switch (pilihan) {
        case 1: {
            float panjang, lebar;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            cout << "Luas persegi panjang: " << panjang * lebar << endl;
            cout << "Keliling persegi panjang: " << 2 * (panjang + lebar) << endl;
            break;
        }
        case 2: {
            float jariJari;
            cout << "Masukkan jari-jari: ";
            cin >> jariJari;
            cout << "Luas lingkaran: " << PI * jariJari * jariJari << endl;
            cout << "Keliling lingkaran: " << 2 * PI * jariJari << endl;
            break;
        }
        case 3: {
            float alas, tinggi;
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            float sisiMiring = sqrt(alas * alas + tinggi * tinggi);
            cout << "Luas segitiga: " << 0.5 * alas * tinggi << endl;
            cout << "Keliling segitiga (siku-siku): " << alas + tinggi + sisiMiring << endl;
            break;
        }
        default:
            cout << "Data tidak ditemukan, program dihentikan" << endl;
    }

    return 0;
}
