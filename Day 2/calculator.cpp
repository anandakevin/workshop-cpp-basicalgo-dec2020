#include <iostream>
using namespace std;

int main(){
    cout << "Welcome to calculator!" << endl;
    int inp;
    do{
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Kali" << endl;
        cout << "4. Bagi" << endl;
        cout << "5. Exit" << endl;
        cout << "Input Anda: ";
        cin >> inp; fflush(stdin);
        if(inp == 1){
            //coba terusin :D
        }
    } while(inp != 5);
}