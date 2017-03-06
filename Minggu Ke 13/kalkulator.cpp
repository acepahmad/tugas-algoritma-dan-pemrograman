#include <iostream>
using namespace std;

class Calculator {
        public:
        // Tomcol, Layar
        // Tambah, Kali, Bagi, Kurang -> Fungsi

        // Datass
        int x;
        int y;

        // Oprasi
        int tambah(int x, int y){
            return x + y;
        }
        int kurang(int x, int y){
            return x - y;
        }
        int kali(int x, int y){
            return x * y;
        }
        int bagi(int x, int y){
            return x / y;
        }
};

int main () {
    Calculator casio;

    cout << "Masukan Nilai X : ";
    cin >> casio.x;

    cout << endl;

    cout << "Masukan Nilai y : ";
    cin >> casio.y;


    cout <<  "Hasil Tambah : " << casio.tambah(casio.x, casio.y) << endl;
    cout <<  "Hasil Kurang : " << casio.kurang(casio.x, casio.y) << endl;
    cout <<  "Hasil Kali : " << casio.kali(casio.x, casio.y) << endl;
    cout <<  "Hasil Bagi : " << casio.bagi(casio.x, casio.y) << endl;
    
    return 0;
}