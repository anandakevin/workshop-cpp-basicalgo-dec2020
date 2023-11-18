#include <iostream>
using namespace std;

void swap(int &a, int &b, int *c) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

//salah satu jenis / tipe sorting
void bubbleSort(int num[], int size){
    int angka;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(num[j + 1] < num[j]) {
                swap(num[j + 1], num[j], &angka);
            }
        }
    }
}

void showData(int num[], int size) {
    for(int i = 0; i < size; i++) {
        cout << num[i] << endl;
    }
}

int main() {
    int temp, ctNumber = 0;
    int number[100];
    cout << "Sorting" << endl;
    cout << "=======" << endl;
    do{
        cout << "Berikan input Anda [-1 untuk berhenti]: ";
        cin >> temp;
        if(temp != -1) number[ctNumber++] = temp;
        else break;
    } while(true);
    bubbleSort(number, ctNumber);
    cout << "Hasil Pengurutannya sebagai berikut " << endl;
    showData(number, ctNumber);
}