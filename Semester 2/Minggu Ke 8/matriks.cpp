#include <iostream>
using namespace std;
// Program Matriks
// IS Program Memasukan Data
// FS Program Menampilkan Data

int main(){
    int M [3] [3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          cout << "Masukan Data Pada Indeks Baris Ke-" << i << " dan Indeks Kolom ke-" << j << " = "; cin >> M [i] [j];
        }
    }
    cout << "=================================================" << endl;
    cout << "|\t" << M [0] [0] << "\t|\t" << M [0] [1] << "\t|\t" << M [0] [2] << "\t|" << endl;
    cout << "|\t" << M [1] [0] << "\t|\t" << M [1] [1] << "\t|\t" << M [1] [2] << "\t|" << endl;
    cout << "|\t" << M [2] [0] << "\t|\t" << M [2] [1] << "\t|\t" << M [2] [2] << "\t|" << endl;
    return 0;
}