#include <iostream> //import library iostream

using namespace std; //untuk mempermudah / menghilangkan std:: pada setiap awalan perintah

const int jumlah = 9;  // Ukuran array ( jumlah array yang disimpan )

int main() {
    int arr[jumlah] = { 19, 40, 10, 90, 2, 50, 60, 50, 1 }; //memasukan isi dari array yang sudah ada pada soal

    int target;
    bool found;  //  untuk memeriksa apakah target ditemukan dalam indeks

    do {                                            //melakukann perulangan do-while sampai kondisi nilai yang diinputkan salah baru berhenti
        cout << "Masukkan nilai yang akan dicari: ";
        cin >> target;

        found = false;  

        cout << "Angka " << target << " ada di";

        for (int i = 0; i < jumlah; ++i) { // melakukan perulangan for 
            if (arr[i] == target) {
                if (found) {
                    cout << " dan";
                }
                cout << " indeks ke " << (i + 1);  // Menampilkan indeks mulai dari 1 bukan dari 0
                found = true;
            }
        }

        if (!found) {
            cout << " tidak ada dalam array" << endl;
            // Jika angka tidak ada dalam array, keluar dari loop
            break;
        }
        else {
            cout << endl;
        }

    } while (true);  // Loop terus berjalan hingga angka yang dicari tidak ada dalam array

    return 0;
}