#include <iostream>
using namespace std;

int main(){
    string nama;
    float nilai1, nilai2, nilai3;
    double nilai_rata_rata;

    cout << "Nama Siswa; "<< nama << endl;
    cin >> nama;
    cout << "Masukkan Nilai 1: ";
    cin >> nilai1;
    cout << "Masukkan Nilai 2: ";
    cin >> nilai2;
    cout << "Masukkan Nilai 3: ";
    cin >> nilai3;

    nilai_rata_rata = (nilai1 + nilai2 + nilai3) / 3;

    cout << "Nama Siswa: " << nama << endl;
    cout << "Nilai Rata-rata: " << nilai_rata_rata << "hasil perlombaan" << endl;
    cout << "Hadiah " << endl;
    if (nilai_rata_rata >= 90) {
        cout << "Komputer core i5." << endl;
    }
    
    else if (nilai_rata_rata >= 80) {
        cout << "Uang tunai 2.500.000." << endl;
    } 
    
    else if (nilai_rata_rata >= 70) {
        cout << "Hiburan." << endl;
    }

    return 0;
}
 