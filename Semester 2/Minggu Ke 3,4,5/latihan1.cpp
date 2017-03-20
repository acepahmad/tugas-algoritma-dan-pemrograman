#include <iostream>
// Program Menghitung IP Mahasiswa
// I.S Program Meng-Input / Memasukan IP Mahasiswa
// F.S Program Menampilkan Data IP Mahasiswa
using namespace std;

int main (){
    // Rumus
        // Variable Int, digunakan untuk bilangan bulat
        int jmlMhs = 0, mhsLs = 0, mhsTls = 0;
        // Variable Float, digunakan untuk bilangan yang memiliki koma (,)
        float ttlNilai = 0, IP, rata2, minIP = 2.75, baTas = -999;
        
    // Fungsi untuk Input / Memasukan IP Mahasiswa
    cout << "Masukan IP: " ;
    cin >> IP;
    
    // Fungsi While 
    while(IP > baTas){ // Mengecek ketika IP lebih dari -999, maka akan melanjutkan perintah if()
        if(IP>=0 && IP<=4){ // Mengecek Jika IP lebih dari sama dengan 0 dan IP kurang dari sama dengan 4
           jmlMhs++; // Menghitung Jumlah Mahasiswa yang di input ketika memasukan IP
           ttlNilai = ttlNilai + IP; // Menghitung Total Nilai IP yang bernilai awal 0 + IP yang di input/dimasukan
           if(IP >= minIP){ // Mengecek Jika IP lebih dari sama dengan Minimum IP yang bernilai 2.75
               mhsLs++; // Jika IP memenuhi syarat Minimum, maka akan ditampilkan LULUS 
           }else{ // Jika Tidak memenuhi syarat, maka akan ditampilkan TIDAK LULUS
               mhsTls++;
           }
        } 
        // Fungsi untuk Input / Memasukan IP Mahasiswa, dan akan terus berulang sampai user memasukan angka -999
        cout << "Masukan IP: " ;
        cin >> IP;
    }
    
    // Rumus Rata-rata IP Mahasiswa
    rata2 = ttlNilai / jmlMhs;
    cout << endl;
    
    // Fungsi untuk menampilkan data yang di input
    cout << "Jumlah Mahasiswa: " << jmlMhs << " Orang" << endl; // Menampilkan Jumlah Mahasiswa
    cout << "Total IP Mahasiswa: " << ttlNilai << endl; // Menampilkan Total IP Seluruh Mahasiswa
    cout << "Rata-rata IP: " << rata2 << endl;    // Menampilkan Rata-rata IP Mahasiswa
    cout << endl;  
    cout << "Mahasiswa Lulus: " << mhsLs << " Orang" << endl;  // Menampilkan Jumlah Mahasiswa Lulus
    cout << "Mahasiswa Tidak Lulus: " << mhsTls << " Orang" << endl;   // Menampilkan Jumlah Mahasiswa Tidak Lulus
    
    // Akhir Program
    return 0;
}