#include <iostream> //untuk menyarangkan library standar c++ untuk menangani fungsi input dan output
using namespace std; //memberitahu compiler agar kita bisa langsung menangani fungsi seperti cout dan 
endl tanpa menuliskan std::cout atau std::endl

int main() // fungsi utama yang akan dieksekusi pertama kali saat program dijalankan. Seluruh intruksi kode program ditulis dalam tanda krawal
{
    // inisial variabel
    int x =50; // membuat variabel bernama x bertipe data interger dan mengisi dengan nilai 50
    
    int abcde; // memasang 5 tempat variabel baru (a,b,c,d,e) bertipe integer yang nantinya akan menampung hasil perhitungan
    // proses
    a = x > 5 + 5; // operas ikerjakan dahulu, lalu perhitungan 50 > 10 a:true
    b = x > 100; // perbandingan 50 > 100 (apakah 50 lebih besar dari 100) b:false
    c  = a&&b; // operator (and bernilai 1 jika kedua variabel bernilai 1) 
    d = a || b; // operator (or) bernilai 1 jika minimal salah 1 variabel bernilai 1
    e = ! (c); // operator (not) membalikan nollean (kebalikan)

    // coutput berupa 1 (benar) dan 0 (salah)
    cout // menampilkan output
    \n // karakter escape untuk membuat garis baru 
    endl // perintah untuk mengakiri baris (end line) sekaligus membersihkan buffer ouput 
    "nilai a = x > 5 + 5 = " // teks yang ditampilkan
    << a // menampilkan nilai variabel a
    << // mengirim teks atau nilai ke output
    ; // akhir dari stetment
    cout << "nilai b = x > 100 = " << b << endl;
    cout << "nilai c = a && b = " << c << endl;
    cout << "nilai d = a || b = " << d << endl;
    cout << "nilai e = !(c) = " << e << endl;

    getchar // membaca satu karakter dari keyboard
    ();
} // batas akhir