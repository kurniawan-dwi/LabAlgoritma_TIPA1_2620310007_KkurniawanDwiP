#include<iostream>
using namespace std;

int main(){
    double r, t;
    double volume;
    const double pi = 3.14159;

    cout << "masukan jari jari tabung : ";
    cin >> r;
    cout << "masukan tinggi tabung : ";
    cin >> t;

    volume = pi * r * r * t;

    cout << "volume tabung adalah : "<< volume << endl;
    return 0;
}