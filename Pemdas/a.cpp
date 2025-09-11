#include <iostream>
#include <string>
using namespace std;

int main() {

    int x;
    cout << "Masukkan angka: ";
    cin >> x;

    int y = (x > 0) ? 1 : -1; 
    cout << "Hasil conditional assignment: y = " << y << endl;

    string namaBenar = "Rafka";
    string nimBenar  = "12345";

    string namaInput, nimInput;
    cout << "\nMasukkan Nama: ";
    cin >> namaInput;
    cout << "Masukkan NIM: ";
    cin >> nimInput;

    if (namaInput == namaBenar && nimInput == nimBenar) {
        cout << "Nama: " << namaInput << ", NIM: " << nimInput << endl;
    } else if (namaInput != namaBenar) {
        cout << "Input nama salah" << endl;
    } else {
        cout << "Input NIM salah" << endl;
    }

    string nama, pass;
    cout << "\nBuat akun terlebih dahulu" << endl;
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan Password: ";
    cin >> pass;

    string cekNama, cekPass;
    cout << "\nSilakan login" << endl;
    cout << "Masukkan Nama: ";
    cin >> cekNama;
    cout << "Masukkan Password: ";
    cin >> cekPass;

    if (cekNama == nama && cekPass == pass) {
        cout << "\n=== Biodata Mahasiswa ===" << endl;
        cout << "Nama     : " << nama << endl;
        cout << "Password : " << pass << endl;
        cout << "Status   : Terdaftar" << endl;
    } else {
        cout << "Data tak ditemukan" << endl;
    }

    return 0;
}
