#include <iostream>
#include <windows.h>

#define clear cin.sync(); cin.clear();

using namespace std;

int operasiTambah(int a, int b) {
    return a + b;
}

int operasiKurang(int a, int b) {
    return a - b;
}

void tambah(){
    system("cls");
    int num1, num2;
    cout << "Penjumlahan" << endl;
    cout << "===========" << endl;
    cout << "Angka pertama: ";
    cin >> num1;
    cout << "Angka kedua: ";
    cin >> num2;
    int result = operasiTambah(num1, num2);
    cout << "Hasil: " << result << endl;
    // getchar();
    system("pause");
    return;
}

void kurang(){
    system("cls");
    int num1, num2;
    cout << "Pengurangan" << endl;
    cout << "===========" << endl;
    cout << "Angka pertama: ";
    cin >> num1;
    cout << "Angka kedua: ";
    cin >> num2;
    int result = operasiKurang(num1, num2);
    cout << "Hasil: " << result << endl;
    // getchar();
    system("pause");
    return;
}

void mainMenu(){
    int inp;
    do{
        system("cls");
        cout << "Kalkulator" << endl;
        cout << "==========" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Exit" << endl;
        do{
            cout << ">> ";
            cin >> inp; clear;
        } while(inp < 1 || inp > 3);
        switch(inp) {
            case 1: tambah(); break;
            case 2: kurang(); break;
            case 3: return;
        }
    } while(inp != 3);
}

int main(){
    mainMenu();
    return 0;
}
