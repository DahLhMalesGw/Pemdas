#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[2][5] = {{1,2,3,4,5}, {5,4,3,2,1}};
    int arr2[2][5] = {{11,4,6,2,1}, {20,17,13,11,7}};
    int arr3[2][5];
    int arr4[2][5];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++){
        arr3[i][j] = arr1[i][j] + arr2[i][j];
        arr4[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    cout << endl;

    cout << "Hasil penjumlahan array: ";
    cout << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
        cout << arr3[i][j] << " ";
        }
    cout << endl;
    }
    cout << endl;

    cout << "Hasil pengurangan array: ";
    cout << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
        cout << arr4[i][j] << " ";
        }
    cout << endl;
    }
    cout << endl;

return 0;



}