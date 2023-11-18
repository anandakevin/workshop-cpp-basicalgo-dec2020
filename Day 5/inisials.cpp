#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, nim;
    cout << "Masukkan nama Anda: ";
    cin >> name;
    cout << "NIM Anda: ";
    cin >> nim;
    string res = "";
    for(int i = 0; i < name.length(); i++) {
        if(i == 0 || name[i - 1] == ' '){
            res += name[i];
        }
    }
    int sum = 0;
    for(int i = 0; i < nim.length(); i++) {
        sum += nim[i] - '0';
    }
    res += to_string(sum);
    cout << res << endl;
    return 0;
}
