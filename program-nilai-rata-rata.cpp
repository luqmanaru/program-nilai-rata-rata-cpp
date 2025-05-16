#include <iostream>
using namespace std;

int main() {
    char nama[50];
    int nilai1, nilai2, nilai3;
    int hasil;

    cout << "Nama Siswa            : ";
    cin >> nama;
    cout << "Nilai pertandingan 1  : ";
    cin >> nilai1;
    cout << "Nilai pertandingan 2  : ";
    cin >> nilai2;
    cout << "Nilai pertandingan 3  : ";
    cin >> nilai3;

    hasil = (nilai1 + nilai2 + nilai3) / 3;

    cout << "\nSiswa yang bernama " << nama;
    cout << " memperoleh nilai rata-rata " << hasil;
    cout << " dari hasil perlombaan yang diikutinya." << endl;

    return 0;
}
