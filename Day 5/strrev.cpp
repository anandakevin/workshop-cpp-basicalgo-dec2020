#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char contoh[100];
    cout << "Berikan Input ";
    cin >> contoh;
    cout << "String Asli: " << contoh << endl;
    cout << "String reverse : " << strrev(contoh) << endl;
    return 0;
}
