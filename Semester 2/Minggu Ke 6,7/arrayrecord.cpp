#include <iostream>
using namespace std;

typedef struct {
  string nim;
  string nama;
  string ipk;  
} mahasiswa;

int main (){
    int N;
    cout << "Masukan Jumlah Mahasiswa:"; 
    cin >> N;

    mahasiswa mhs[N];
    for (int i = 0 ; i <  N ; i++)
    { 
       cout << "Data Mahasiswa Ke " << i+1 << endl;
       cout << "Masukan NIM: ";
       cin >> mhs[i].nim;
       cout << "Masukan NAMA: ";
       cin >> mhs[i].nama;
       cout << "Masukan IPK: ";
       cin >> mhs[i].ipk; 
       cout << endl;
    }
    cout << "===============================================" << endl;
    cout << "       NIM      |      NAMA     |      IPK     " << endl;
    cout << "===============================================" << endl;

    for (int i = 0 ; i <  N ; i++)
    {
    cout << "\t" << mhs[i].nim  << "\t|"  ;
    cout << "\t" << mhs[i].nama << "\t|"  ;
    cout << "\t" << mhs[i].ipk  << "\t"  ;
    cout << endl;
    }
    return 0;

}