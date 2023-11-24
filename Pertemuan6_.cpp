 #include <iostream>
using namespace std;

int main() {
    cout << "=======================================" << endl;
    cout << "## Cari nilai Tertinggi  ##" << endl;
    cout << "=======================================" << endl;
    cout << endl;

    cout << "Nilai: " << endl; // Menampilkan semua darah dari array element
    int Array[6] = {36, 28, 20, 16, 8, 4};
    for (int i = 0; i < 6; i++) {
        cout << "Nilai " << i + 1 << ": " << Array[i] << endl;
    }

    int nilaitertinggi = Array[0];
    int index = 0;

    for (int i = 1; i < 6; i++) {     // Mencari nilai tertinggi dengan indexnya
        if (Array[i] >  nilaitertinggi) {
             nilaitertinggi = Array[i];
            index = i;
        }
    }

    cout << endl;

    cout << "nilai tertinggi: " <<  nilaitertinggi << endl;     // Menampilkan hasil darah tertinggi beserta indexnya
    cout << "Index dari nilai tertinggi: " << index << endl;

    return 0;
}
