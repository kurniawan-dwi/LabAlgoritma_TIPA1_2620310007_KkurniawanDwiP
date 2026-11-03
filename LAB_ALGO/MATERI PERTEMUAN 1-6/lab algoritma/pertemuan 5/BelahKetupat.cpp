#include<iostream>
using namespace std;

int main(){
    int a,i,j,k,m;

    cout << "Input lebar belah ketupat = ";
    cin >> a;
    cout << endl;
    for (int i = 1; i <=a; i++){
        for(j = 1; j <=a - i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
    for(int i = 1;i <=a; i++){
        for(j = 1; j <=i; j++){
            cout << " *";
        }

        cout << endl;
    }

    for(int i = 1;i <=a; i++){
        for(j = 1; j <=i; j++){
            cout << " "
        }
    }
}