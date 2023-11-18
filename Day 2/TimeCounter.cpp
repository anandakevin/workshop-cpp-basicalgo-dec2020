#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

struct formatJam{
    int s, m, h;
} jam1, jam2;

int main(){
    formatJam jam1, jam2;

    cout << "Welcome to time counter" << endl;
    cout << "Insert first time" << endl;
    //validasi
    do{
        cout << "Hour   : ";
        cin >> jam1.h; fflush(stdin);
    } while(jam1.h < 0 || jam1.h > 24);
    do{
        cout << "Minute : ";
        cin >> jam1.m; fflush(stdin);
    } while(jam1.m < 0 || jam1.m > 59);
    do{
        cout << "Second : ";
        cin >> jam1.s; fflush(stdin);
    } while(jam1.s < 0 || jam1.s > 59);

    cout << "Insert second time" << endl;
    //validasi
    do{
        cout << "Hour   : ";
        cin >> jam2.h; fflush(stdin);
    } while(jam2.h < 0 || jam2.h > 24);
    do{
        cout << "Minute : ";
        cin >> jam2.m; fflush(stdin);
    } while(jam2.m < 0 || jam2.m > 59);
    do{
        cout << "Second : ";
        cin >> jam2.s; fflush(stdin);
    } while(jam2.s < 0 || jam2.s > 59);

    int second1 = jam1.h * 3600 + jam1.m * 60 + jam1.s;
    int second2 = jam2.h * 3600 + jam2.m * 60 + jam2.s;

    int diff = max(second1, second2) - min(second1, second2);
    cout << "The difference between both time is " << diff << endl;
    return 0;
}
