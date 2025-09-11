#include <iostream>
using namespace std;

int main() {
    int jamKerja;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    const int UPAH_NORMAL = 5000;
    const int UPAH_LEMBUR = 6000;
    const int DENDA_PER_JAM = 1000;

    int upah = 0, lembur = 0, denda = 0;

    if (jamKerja > 60) {
        upah = 60 * UPAH_NORMAL;
        lembur = (jamKerja - 60) * UPAH_LEMBUR;
    } 
    else if (jamKerja < 50) {
        upah = jamKerja * UPAH_NORMAL;
        denda = (50 - jamKerja) * DENDA_PER_JAM;
    } 
    else {
        upah = jamKerja * UPAH_NORMAL;
    }

    int total = upah + lembur - denda;

    cout << "\nJam kerja : " << jamKerja << endl;
    cout << "Upah      = Rp. " << upah << endl;
    cout << "Lembur    = Rp. " << lembur << endl;
    cout << "Denda     = Rp. " << denda << endl;
    cout << "-------------------------" << endl;
    cout << "Total     = Rp. " << total << endl;

    return 0;
}
