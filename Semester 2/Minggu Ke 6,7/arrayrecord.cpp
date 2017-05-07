#include <iostream>
using namespace std;
// Program Array Record
// IS Program Memasukan Data
// FS Program Menampilkan Data

// Fungsi Record / Typedef
typedef struct {
  string nim;
  string nama;
  string ipk;  
} mahasiswa;

int main (){
    // Rumus
    // Variable Data
    int N;
    // Program Memasukan Data
    cout << "Masukan Jumlah Mahasiswa:"; 
    cin >> N;
    
    // Type Data mahasiswa, memiliki array mhs[N]
    mahasiswa mhs[N];
    // Pengulangan Data
    for (int i = 0 ; i <  N ; i++)
    { 
       // Memasukan Data Mahasiswa 
       cout << "Data Mahasiswa Ke " << i+1 << endl;
       cout << "Masukan NIM: ";
       cin >> mhs[i].nim;
       cout << "Masukan NAMA: ";
       cin >> mhs[i].nama;
       cout << "Masukan IPK: ";
       cin >> mhs[i].ipk; 
       cout << endl;
    }
    // Menampilkan Table
    cout << "===============================================" << endl;
    cout << "       NIM      |      NAMA     |      IPK     " << endl;
    cout << "===============================================" << endl;
    
    // Pengulangan Data
    for (int i = 0 ; i <  N ; i++)
    {
      // Menampilkan Data Mahasiswa
      cout << "\t" << mhs[i].nim  << "\t|"  ;
      cout << "\t" << mhs[i].nama << "\t|"  ;
      cout << "\t" << mhs[i].ipk  << "\t"  ;
      cout << endl;
    }
    // Akhir Program
    return 0;

}
