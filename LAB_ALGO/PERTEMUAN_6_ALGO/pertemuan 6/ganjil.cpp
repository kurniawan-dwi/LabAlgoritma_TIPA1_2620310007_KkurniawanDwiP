#include<iostream>
using namespace std;

int main(){
    int total = 0;
    
    for (int i = 1; i <= 19; i +=2){
        cout <<i;
        total += i;
        if (i < 19) {
            cout << " + ";
        }
    }
    cout << " = " << total << endl;
    return 0;
}