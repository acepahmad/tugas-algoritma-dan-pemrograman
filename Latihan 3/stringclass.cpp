#include <iostream>
using namespace std;

int main() {
    string str1 = "5";
        string str2 = "6";
        string str3;
        int len;

        str3 = str1;
        cout << "str3 : " << str3 << endl;

        str3 = str1 + str2;
        cout << "str1 + str2 : " << str3 << endl;

        len = str3.size();
        cout << "str3.size() : " << len << endl;

return 0;

}