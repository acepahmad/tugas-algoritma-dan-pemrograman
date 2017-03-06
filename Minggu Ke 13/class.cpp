#include <iostream>
using namespace std;

class Manusia {
    int tinggi;
    int beratBadan;
    string nama;

    public:

    
    makan () {
        cout << "Makan" << endl;
    }
};

int main () {
  Manusia wawan;
  
  wawan.tinggi = 100;
  wawan.nama = "Wawan";
  cout << wawan.tinggi << endl;
  wawan.makan();

  return 0;

}