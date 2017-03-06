#include <iostream>
using namespace std;


int main () {
   int *ptr = NULL;
   // Coba int *ptr;
   cout << "The value of ptr is :" << ptr;
   if (ptr){
   cout << "Not Null" << endl;
   }else{ 
   cout << "Null" << endl;
   }

   if(!ptr){
   cout << "Null" << endl;
   }else{
       cout << "Not Null" << endl;
       }
}