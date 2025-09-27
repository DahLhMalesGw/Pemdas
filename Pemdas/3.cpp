#include <bits/stdc++.h>
using namespace std;

int main() {
    int pilihan;
    const float PI = 3.14159f;

    do {
        cout << "\nMenu\n";
        cout << "0. KELUAR\n";
        cout << "1. HITUNG VOLUME BALOK\n";
        cout << "2. HITUNG VOLUME BOLA\n";
        cout << "3. HITUNG VOLUME KERUCUT\n";
        cout << "4. HITUNG VOLUME SILINDER\n";
        cout << "5. HITUNG VOLUME LIMAS SEGITIGA\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 0:
                cout << "Keluar dari program.\n";
                break;

            case 1: { 
                float panjang, lebar, tinggi;
                cout << "Masukkan panjang balok: ";
                cin >> panjang;
                cout << "Masukkan lebar balok: ";
                cin >> lebar;
                cout << "Masukkan tinggi balok: ";
                cin >> tinggi;

                if (panjang <= 0 || lebar <= 0 || tinggi <= 0) {
                    cout << "Input tidak valid! Semua nilai harus > 0.\n";
                    break;
                }

                float volume = panjang * lebar * tinggi;
                cout << "Volume balok: " << volume << endl;
                break;
            }

            case 2: {
                float jari;
                cout << "Masukkan jari-jari bola: ";
                cin >> jari;

                if (jari <= 0) {
                    cout << "Input tidak valid! Jari-jari harus > 0.\n";
                    break;
                }

                float volume = (4.0f / 3.0f) * PI * jari * jari * jari;
                cout << "Volume bola: " << volume << endl;
                break;
            }

            case 3: {
                float jari, tinggi;
                cout << "Masukkan jari-jari kerucut: ";
                cin >> jari;
                cout << "Masukkan tinggi kerucut: ";
                cin >> tinggi;

                if (jari <= 0 || tinggi <= 0) {
                    cout << "Input tidak valid! Jari-jari dan tinggi harus > 0.\n";
                    break;
                }

                float volume = (1.0f / 3.0f) * PI * jari * jari * tinggi;
                cout << "Volume kerucut: " << volume << endl;
                break;
            }

            case 4: { 
                float jari, tinggi;
                cout << "Masukkan jari-jari silinder: ";
                cin >> jari;
                cout << "Masukkan tinggi silinder: ";
                cin >> tinggi;

                if (jari <= 0 || tinggi <= 0) {
                    cout << "Input tidak valid! Jari-jari dan tinggi harus > 0.\n";
                    break;
                }

                float volume = PI * jari * jari * tinggi;
                cout << "Volume silinder: " << volume << endl;
                break;
            }

            case 5: { 
                float alas, tinggiSegitiga, tinggiLimas;
                cout << "=== Hitung Alas Segitiga ===\n";
                cout << "Masukkan alas segitiga: ";
                cin >> alas;
                cout << "Masukkan tinggi segitiga: ";
                cin >> tinggiSegitiga;

                if (alas <= 0 || tinggiSegitiga <= 0) {
                    cout << "Input tidak valid! Alas dan tinggi segitiga harus > 0.\n";
                    break;
                }

                float luasAlas = 0.5f * alas * tinggiSegitiga;

                cout << "Masukkan tinggi limas: ";
                cin >> tinggiLimas;

                if (tinggiLimas <= 0) {
                    cout << "Input tidak valid! Tinggi limas harus > 0.\n";
                    break;
                }

                float volume = (1.0f / 3.0f) * luasAlas * tinggiLimas;
                cout << "Volume limas segitiga: " << volume << endl;
                break;
            }

            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }

    } while (pilihan != 0);

    return 0;
}
