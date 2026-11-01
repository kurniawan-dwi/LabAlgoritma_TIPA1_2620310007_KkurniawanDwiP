#include<iostream>
using namespace std;

int main(){
    int n, pembagi = 0;

    cout << "masukan angka: ";
    cin >>n;

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            pembagi++;
        }
    }
    if (pembagi == 2){
        cout << n << " adalah bilangan prima" << endl;
    } else {
        cout << n << " bukan bilangan prima" << endl;
    }
    return 0;
}