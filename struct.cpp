#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

void inputdata(mahasiswa* ti) {
    cout << "Masukkan nama   : ";
    cin.ignore();
    getline(cin, ti->nama);
    cout << "Masukkan NIM    : ";
    getline(cin, ti->nim);
    cout << "Masukkan alamat : ";
    getline(cin, ti->alamat);
    cout << "Masukkan IPK    : ";
    cin >> ti->ipk;
}

int main() {
    mahasiswa tyaa;

    tyaa.nama= "tyaa";
    tyaa.nim= "c030324111";
    tyaa.alamat= "jl.  cemara raya";
    tyaa.ipk= 4.0;

    cout << "=== Data Awal ===\n";
    cout << "Nama   : " << tyaa.nama << "\n";
    cout << "NIM    : " << tyaa.nim << "\n";
    cout << "Alamat : " << tyaa.alamat << "\n";
    cout << "IPK    : " << tyaa.ipk << "\n\n";

    inputdata(&tyaa);
    cout << "=== Berikut data yang telah anda input ===\n" << endl;
    cout << "Nama: " << tyaa.nama << "\n";
    cout << "Nim: " << tyaa.nim << "\n";
    cout << "alamat: " << tyaa.alamat << "\n";
    cout << "ipk: " << tyaa.ipk << "\n";

    system("cls"); 
    cout << "Halo " << tyaa.nama << endl;

    return 0;
}
