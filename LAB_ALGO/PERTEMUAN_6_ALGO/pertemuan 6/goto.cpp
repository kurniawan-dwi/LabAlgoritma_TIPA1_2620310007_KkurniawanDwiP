#include<iostream>
using namespace std;

int main(){
    int a,b ;
    char lagi;

    do{
        cout << "masukan bilangan = ";
        cin >> a;

        b = a % 2;

        cout << "Nilai " << a << " % 2 adalah = " << b << endl;

        cout << "\nHitung Lagi [Y/T] : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'Y' || lagi == 'y');
    cout << "Selesai." << endl;
    return 0;
}