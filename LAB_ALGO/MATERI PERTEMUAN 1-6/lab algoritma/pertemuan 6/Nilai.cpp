#include<iostream>
using namespace std;

int main(){
    int nilai[5] = {90, 80, 70, 60, 50};

    cout << "Daftar nilai array: " << endl;

    for (int i=0; i<5; i++){
        cout << "Nilai ke-" << i << "= " << nilai[i] << endl;
    }

    return 0;
}