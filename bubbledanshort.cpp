#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
* Nama : Itang Asep Sopiandi
* NIM : 230401010045
* kelas : IT201
* MK : Struktur data dan algoritma
*/

struct Person {
    string nama;
    string alamat;
};

void bubbleSort(vector<Person>& data) {
    int a = data.size();
    for (int i = 0; i < a - 1; ++i) {
        for (int j = 0; j < a - i - 1; ++j) {
            if (data[j].nama > data[j + 1].nama) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

void selectionSort(vector<Person>& data) {
    int a = data.size();
    for (int i = 0; i < a - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < a; ++j) {
            if (data[j].nama < data[minIndex].nama) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

void printData(const vector<Person>& data) {
    for (const auto& person : data) {
        cout << person.nama << " " << person.alamat << endl;
    }
}

int main() {
    vector<Person> data = {
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
    printData(data);

    int pilihan;
    cout << "\nPilih metode pengurutan:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "Masukkan pilihan Anda (1 atau 2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        bubbleSort(data);
        cout << "\nData setelah diurutkan dengan Bubble Sort:\n";
    }
    else if (pilihan == 2) {
        selectionSort(data);
        cout << "\nData setelah diurutkan dengan Selection Sort:\n";
    }
    else {
        cout << "Pilihan tidak valid.\n";
        return 1;
    }

    printData(data);

    return 0;
}
