#include <iostream> //mengimport library iostream
#include <string> //menginput library string

using namespace std;

/*
* Nama : Itang Asep Sopiandi
* NIM : 230401010045
* Kelas : IT201
* MK : Struktur Data dan Algoritma
*/

struct datadiri {
    string nama;
    string alamat;
};

const int jumlah = 8;  // Ukuran array

//membuat bubleshort untuk mengurutkan data yang masih teracak
void bubbleSort(datadiri data[], int ukuran) { 
    for (int i = 0; i < ukuran - 1; ++i) {
        for (int j = 0; j < ukuran - i - 1; ++j) {
            if (data[j].nama > data[j + 1].nama) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

//membuat selectionshort untuk mengurutkan data yang masih teracak
void selectionSort(datadiri data[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (data[j].nama < data[minIndex].nama) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

void printData(const datadiri data[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << data[i].nama << " " << data[i].alamat << endl;
    }
}

int main() { 
    //buat data yang masih teracak dan masukkan ke dalam array
    datadiri data[jumlah] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    cout << "Data sebelum diurutkan:\n";
    printData(data, jumlah);

    //pilih metode yang akan di gunakan untuk mengurutkan data di atas
    int pilihan;
    cout << "\nPilih metode pengurutan:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "Masukkan pilihan Anda (1 atau 2): ";
    cin >> pilihan;

    //buat conditioning dengan if else untuk membuat pilihan antara bubble atau selection
    if (pilihan == 1) {
        bubbleSort(data, jumlah);
        cout << "\nData setelah diurutkan dengan Bubble Sort:\n";
    }
    else if (pilihan == 2) {
        selectionSort(data, jumlah);
        cout << "\nData setelah diurutkan dengan Selection Sort:\n";
    }
    else {
        cout << "Pilihan tidak valid.\n";
        return 1;
    }

    printData(data, jumlah);

    return 0;
}
