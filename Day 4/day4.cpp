#include <iostream>
using namespace std;

int power(int num, int pangkat) {
    if(pangkat == 0) return 1; //return 1 karena n^0 = 1
    // base case
    //kondisi function rekursif untuk berhenti
    return num * power(num, pangkat - 1);
}

//power(2, 5) --> 2^5
//power(2, 5) return 2 * power(2, 4)
//power(2, 4) return 2 * power(2, 3)
//power(2, 3) return 2 *    
//power(2, 2) return 2 * 2 * 1
//power(2, 1) return 2 * 1
//power(2, 0) return 1

int faktorial(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int num, pangkat;
    cout << "Masukkan angka: ";
    cin >> num; 
    cout << "Masukkan pangkat: ";
    cin >> pangkat;
    cout << "Hasilnya adalah " << power(num, pangkat) << endl;

    int faktorNumber;
    cout << "Input angka untuk faktorial";
    cin >> faktorNumber;
    cout << "Hasil " << faktorNumber << "! = " << faktorial(faktorNumber) << endl;

    return 0;
}