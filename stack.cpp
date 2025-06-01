#include <iostream>
using namespace std;

const int MAX_KOTAK_DI_TUMPUKAN = 10;
typedef int isiKotak;

typedef struct {
    isiKotak daftarKotak[MAX_KOTAK_DI_TUMPUKAN];
    int jumlahKotak;
} TumpukanKotak;

void inisialisasiTumpukan(TumpukanKotak *tumpukan) {
    tumpukan->jumlahKotak = 0;
}

int apakahPenuh(TumpukanKotak *tumpukan) {
  return (tumpukan->jumlahKotak == MAX_KOTAK_DI_TUMPUKAN);
}

int apakahKosong(TumpukanKotak *tumpukan) {
    return (tumpukan->jumlahKotak == 0); 
}
void keluarkanKotak(TumpukanKotak *tumpukan, isiKotak *nilaiKotak) {
    if (apakahKosong(tumpukan)) {
                cout << "Tumpukan kotak masih kosong! Tidak bisa mengambil kotak." << endl;
    } else {
--(tumpukan->jumlahKotak);
*nilaiKotak = tumpukan->daftarKotak[tumpukan->jumlahKotak];
cout << "Kotak dengan isi '" << *nilaiKotak << "' berhasil diambil dari tumpukan." << endl;
    }
}
void masukkanKotak(isiKotak nilaiKotak, TumpukanKotak *tumpukan) {
    if (apakahPenuh(tumpukan)) {
        cout << "Tumpukan kotak penuh! Tidak bisa menambahkan kotak lagi." << endl;
    } else {
        tumpukan->daftarKotak[tumpukan->jumlahKotak] = nilaiKotak;
        cout << "Kotak dengan isi '" << nilaiKotak << "' berhasil ditambahkan ke tumpukan." << endl;
        ++(tumpukan->jumlahKotak);
    }
}
int main() {
    TumpukanKotak tumpukanData;
    inisialisasiTumpukan(&tumpukanData);
    isiKotak hasilAmbilKotak;
    cout << "--- Awal Operasi ---" << endl;
    keluarkanKotak(&tumpukanData, &hasilAmbilKotak);

    masukkanKotak(101, &tumpukanData);
    masukkanKotak(202, &tumpukanData);
    masukkanKotak(303, &tumpukanData);

    keluarkanKotak(&tumpukanData, &hasilAmbilKotak);

    masukkanKotak(404, &tumpukanData);
    masukkanKotak(505, &tumpukanData);
    masukkanKotak(606, &tumpukanData);
    masukkanKotak(707, &tumpukanData);
    masukkanKotak(808, &tumpukanData);
    masukkanKotak(909, &tumpukanData);
    masukkanKotak(111, &tumpukanData);

    masukkanKotak(222, &tumpukanData);
    masukkanKotak(333, &tumpukanData);
    cout << "--- Akhir Operasi ---" << endl;

    return 0;
}

