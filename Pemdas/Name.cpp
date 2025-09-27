#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {        
        for (int j = 0; j < 5; j++) {    
            if (j == 0) {
                cout << "R"; 
            } 
            else if (i == 0 && j < 4) {
                cout << "R"; 
            } 
            else if (i == 2 && j < 4) {
                cout << "R"; 
            } 
            else if (i == 1 && j == 4) {
                cout << "R"; 
            }
            else if (i == 3 && j == 2) {
                cout << "R"; 
            }
            else if (i == 4 && j == 3) {
                cout << "R"; 
            }
            else {
                cout << " "; 
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) { 
            if (i == 0 || i == 2) { 
                
                cout << "A";
            } else if (j == 0 || j == 4) {
                
                cout << "A";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) { 
            if (i == 0 || i == 2) { 
               
                cout << "F";
            } else if (j == 0) {
                
                cout << "F";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
   
    for (int i = 0; i < 5; i++) {        
        for (int j = 0; j < 5; j++) {   
            if (j == 0) {
                cout << "K"; 
            } 
            else if (j == 4 - i) {
                cout << "K"; 
            } 
            else if (j == i) {
                cout << "K"; 
            } 
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) { 
            if (i == 0 || i == 2) { 
               
                cout << "A";
            } else if (j == 0 || j == 4) {
                
                cout << "A";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

