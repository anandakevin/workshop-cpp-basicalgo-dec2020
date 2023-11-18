#include <iostream>
#include <ctype.h>

#define clear cin.sync(); cin.clear();

using namespace std;

int pow(int num, int pangkat) {
    if(pangkat == 0) return 1; //base case
    return num * pow(num, pangkat - 1);
}

int check(int a, int b, int c) {
    if(a*a + b*b < c*c) return -1 //tumpul
    else if(a*a + b*b == c*c) return 0; //siku -siku
    else if(a*a + b*b > c*c) return 1; //lancip
}

int check1 = check(a, b, c);
int check2 = check(a, c, b);
int chekc3 = check(b, c, a);

void checkString(){
    char contohTeks[100]; 0saya
    bool checkAlpha = isalpha(contohTeks[2]);
    //benar, return true
    bool checkDigit = isdigit(contohTeks[1]);
    //benar, return true
    int countDigit = 0, countAlpha = 0, countSymbol = 0;
    for(int i = 0; i < contohTeks.length(); i++){
        if(contohTeks[0] >= 48 && contohTeks[0] <= 57) {
            countDigit++;
        }
        else if(isalpha(contohTeks[i])) countAlpha++;
        else {
            switch(contohTeks[i]) {
                case ',': countComma++;
            }
        }
    }
    cout << "Jumlah alphabet nya sebanyak " << countAlpha << endl;
}

int main() {
    int num1, num2, num3;
    cout << "First number: "; cin >> num1; clear;
    cout << "Second number: "; cin >> num2; clear;
    cout << "Third number: "; cin >> num3; clear;
    cout << "The sequence is: " << endl; 
    //char
    //string
    //array of char
    //masalah kalau tidak ada fflush(stdin) sebelumnya
    int low, mid, hi;
    if(num1 > num2) {
        if(num3 > num1) {
            hi = num3;
            mid = num1;
            low = num2;
        }
        else {
            if(num3 > num2) {
                hi = num1;
                mid = num3;
                low = num2;
            }
            else {
                hi = num1;
                mid = num2;
                low = num3;
            }
        }
    }
    else { //num2 > num1
        if(num3 > num2) {
            hi = num3;
            mid = num2;
            low = num1;
        }
        else {
            if(num3 > num1) {
                hi = num2;
                mid = num3;
                low = num1;
            }
            else {
                hi = num2;
                mid = num1;
                low = num3;
            }
        }
    }
    cout << hi << " " << mid << " " << low << endl;
    return 0;
}