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
    cout << endl;
    cout << "-----------------------";
    cout << "---Masukan Element Array---";
    cout << "-----------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort() { // procedure insertion sort
    int temp;
    int j;

    for (int i = 1; i < n; i++) { // dimulai dari data ke-2 (indeks 1)
        temp = arr[i]; // simpan nilai yang akan dibandingkan
        j = i - 1;     // mulai bandingkan dengan data di sebelah kirinya

        while (j >= 0 && arr[j] > temp) { // selama data di kiri lebih besar
            arr[j + 1] = arr[j];          // geser data ke kanan
            j--;
        }
        arr[j + 1] = temp; // tempatkan nilai temp di posisi yang benar

        // Menampilkan langkah-langkah pengurutan (step-by-step)
        cout << "\nStep " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
}