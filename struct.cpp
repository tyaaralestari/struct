#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    mahasiswa tyaa;

    tyaa.nim = "c030324111";
    tyaa.nama = "tyaa";
    tyaa.alamat = "jl cemara raya";
    tyaa.ipk = 4.0;

    cout << tyaa.nim << "\n";
    cout << tyaa.nama << "\n";
    cout << tyaa.alamat << "\n";
    cout << tyaa.ipk << "\n";

    cout << "\nMasukkan nama baru: ";
    cin >> tyaa.nama;

    system("cls"); 
    cout << "Halo " << tyaa.nama << endl;

    return 0;
}
