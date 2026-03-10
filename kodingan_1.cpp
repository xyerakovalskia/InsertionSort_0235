#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n; //membuat variable inputan n

void input () { //procedure input
    while (true){
        cout << "Masukan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nArray Tidak Boleh lebih dari 20\n";
        }
    }