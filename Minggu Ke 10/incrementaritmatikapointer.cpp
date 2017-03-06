#include <iostream>
using namespace std;

int main () {
  const int MAX = 3 ;
  int var[MAX] = {10, 100, 200};

    int *ptr;

    // Alamat array ke pointer
    ptr = var;

    for (int i = 0; i < MAX; i++){
        cout << "Addrees of the var[" << 1 << "] = ";
        cout << ptr << endl;

        cout << " Value of var[" << 1 << "] = ";
        cout << *ptr << endl;

        // Menunjuk ke memory selanjutnya
        ptr++;
    }
}