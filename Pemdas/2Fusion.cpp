#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr1[] = {1,2,3};
    int arr2[] = {4,5,6,7};

    int size1 = 3;
    int size2 = 4;
    int size3 = size1 + size2;

    int arr3[size3];

    for (int i = 0; i < size1; i++){
        arr3[i] = arr1[i];
    }

    for (int j = 0; j < size2; j++){
        arr3[size1 + j] = arr2[j];
    }

    cout << "Hasil gabungan : ";
    for (int k = 0; k < size3; k++){
        cout << arr3[k] << " ";
    }
    cout << endl;


}