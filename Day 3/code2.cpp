#include <iostream>
using namespace std;

void printData(int numbers[], int numberOfData){
    cout << "Data Anda: " << endl;
    for(int i = 0; i < numberOfData; i++) {
        cout << numbers[i] << endl;
    }
}

void minData(int numbers[], int numberOfData) {
    int minValue = 10000;
    for(int i = 0; i < numberOfData; i++) {
        if(numbers[i] < minValue) {
            minValue = numbers[i];
        }
    }
    cout << "Angka terkecil adalah " << minValue << endl;
}

void sumData(int numbers[], int numberOfData) {
    int sumValue = 0;
    for(int i = 0; i < numberOfData; i++) {
        sumValue = sumValue + numbers[i];
    }
    cout << "Jumlah angkanya: " << sumValue << endl;
}

int main(){
    int inp[100], numberOfData = 0;
    int temp;
    do{
        cout << "Berikan input [-1 untuk berhenti]: ";
        cin >> temp; cin.sync(); cin.clear();
        if(temp != -1) {
            inp[numberOfData] = temp;
            numberOfData++;
        } 
        else { //temp == -1
            break;
        }
    } while(temp != -1);
    printData(inp, numberOfData);
    minData(inp, numberOfData);
    
    
}