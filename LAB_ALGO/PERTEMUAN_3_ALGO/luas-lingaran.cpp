#include<iostream> 
using namespace std;

int main(){
    double r;
    double luas;
    const double pi = 3.14159;

    cout << "masukan jari jari lingkaran : ";
    cin >> r;

    luas = pi * r * r;

    cout << "luas lingkaran adalah : "<< luas << endl;
    return 0;
}