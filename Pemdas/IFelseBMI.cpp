#include <iostream>
using namespace std;

int main () {
    cout << "Masukkan berat badan (kg): ";
    float berat;
    cin >> berat;

    cout << "Masukkan tinggi badan (m): ";
    float tinggi;
    cin >> tinggi;

    float bmi = berat / (tinggi * tinggi);
    cout << "Indeks Massa Tubuh (BMI): " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Status: Kurang berat badan" << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Status: Normal" << endl;
    } else {
        cout << "Status: Kelebihan berat badan" << endl;
    }

    return 0;
}