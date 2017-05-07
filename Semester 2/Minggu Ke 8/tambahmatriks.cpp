#include <iostream>
using namespace std;
// Program Menjumlahkan 2 Buah Matriks
// IS Program Memasukan Data
// FS Program Menampilkan Data

int main(){
    // Rumus
    // Variable Data Matriks
    int M  [3] [3];
    int M1 [3] [3];
    int M2 [3] [3];
    
    // Fungsi Pengulangan Data
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
         // Program Memasukan Data 
         cout << "Masukan Data M1 Baris " << i << " dan Kolom " << j << " = "; cin >> M1 [i] [j];
         cout << "Masukan Data M2 Baris " << i << " dan Kolom " << j << " = "; cin >> M2 [i] [j];
         // Fungsi Pertambahan M = M1+M2
         M [i] [j] =  M1 [i] [j] + M2 [i] [j];
        }
    }
    // Menampilkan Hasil Input Data Dari M1
    cout << endl;
    cout << "Tabel M1 ========================================" << endl;
    cout << "|\t" << M1 [0] [0] << "\t|\t" << M1 [0] [1] << "\t|\t" << M1 [0] [2] << "\t|" << endl;
    cout << "|\t" << M1 [1] [0] << "\t|\t" << M1 [1] [1] << "\t|\t" << M1 [1] [2] << "\t|" << endl;
    cout << "|\t" << M1 [2] [0] << "\t|\t" << M1 [2] [1] << "\t|\t" << M1 [2] [2] << "\t|" << endl;
    cout << "=================================================" << endl << endl;

    // Menampilkan Hasil Input Data Dari M2
    cout << "Tabel M2 ========================================" << endl;
    cout << "|\t" << M2 [0] [0] << "\t|\t" << M2 [0] [1] << "\t|\t" << M2 [0] [2] << "\t|" << endl;
    cout << "|\t" << M2 [1] [0] << "\t|\t" << M2 [1] [1] << "\t|\t" << M2 [1] [2] << "\t|" << endl;
    cout << "|\t" << M2 [2] [0] << "\t|\t" << M2 [2] [1] << "\t|\t" << M2 [2] [2] << "\t|" << endl;
    cout << "=================================================" << endl << endl;
    
    // Menampilkan Hasil Input Data Dari M = M1+M2 
    cout << "Tabel M =========================================" << endl;
    cout << "|\t" << M [0] [0] << "\t|\t" << M [0] [1] << "\t|\t" << M [0] [2] << "\t|" << endl;
    cout << "|\t" << M [1] [0] << "\t|\t" << M [1] [1] << "\t|\t" << M [1] [2] << "\t|" << endl;
    cout << "|\t" << M [2] [0] << "\t|\t" << M [2] [1] << "\t|\t" << M [2] [2] << "\t|" << endl;
    cout << "=================================================" << endl << endl;

    // Akhir Program
    return 0;
}