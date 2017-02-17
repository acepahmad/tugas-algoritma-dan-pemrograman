#include <iostream>

using namespace std;

int main (){
    int a = 100;
    int b = 200;
    
    cout << "Before Swap, Value of a : " << a << endl;
    cout << "Before Swap, Value of b : " << b << endl;

    swap(a, b);

    cout << "After Swap, Value of a : " << a << endl;
    cout << "After Swap, Value of b : " << b << endl;

    return 0;
}

// Fungsi Swap
void swap(int &x, int &y){

    int temp;
    
    temp = x;
    x = y;
    y = temp;


    return;
}