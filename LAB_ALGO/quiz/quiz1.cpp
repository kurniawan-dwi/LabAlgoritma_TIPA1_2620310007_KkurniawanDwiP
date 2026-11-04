#include <iostream>
using namespace std;

int main() {
    int pilihan, n, angka;

    do {
        cout << "\n===============================" << endl;
        cout << "       == Selamat Datang ==    " << endl;
        cout << "===============================" << endl;
        cout << " 1. Menampilkan Bilangan Ganjil" << endl;
        cout << " 2. Menampilkan Bilangan Genap" << endl;
        cout << " 3. Cek Bilangan Prima" << endl;
        cout << " 0. Keluar" << endl;
        cout << "-------------------------------" << endl;
        cout << " Masukkan pilihan Anda: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nMasukkan batas angka (1 s/d N): ";
            cin >> n;
            cout << "Bilangan ganjil adalah: ";
            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0) {
                    cout << i << " ";
                }
            }
            cout << endl;

        } else if (pilihan == 2) {
            cout << "\nMasukkan batas angka (1 s/d N): ";
            cin >> n;
            cout << "Bilangan genap adalah: ";
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0) {
                    cout << i << " ";
                }
            }
            cout << endl;

        } else if (pilihan == 3) {
            cout << "\nMasukkan bilangan yang ingin dicek: ";
            cin >> angka;

            int jumlah_faktor = 0;
            for (int i = 1; i <= angka; i++) {
                if (angka % i == 0) {
                    jumlah_faktor++;
                }
            }
            if (jumlah_faktor == 2) {
                cout << angka << " adalah bilangan prima." << endl;
            } else {
                cout << angka << " bukan bilangan prima." << endl;
            }

        } else if (pilihan == 0) {
            cout << "\nTerima kasih, program selesai." << endl;
        } else {
            cout << "\nPilihan tidak valid. Silakan coba lagi." << endl;
        }

    } while (pilihan != 0);

    return 0;
}
