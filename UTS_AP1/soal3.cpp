#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    system("cls");
    string nama, nim;
    float matkul1, matkul2, matkul3, mean;

    cout << "Program Penilaian Mahasiswa" << endl;
    cout << "Nama Mahasiswa: "; getline(cin, nama);
    cout << "NIM: "; cin >> nim;
    cout << "Nilai Mata Kuliah:" << endl;
    cout << "Algoritma & Pemrograman: "; cin >> matkul1;
    cout << "Probabilitas & Statistika: "; cin >> matkul2;
    cout << "Matematika Diskrit: "; cin >> matkul3;

    mean = (matkul1 + matkul2 + matkul3) / 3;

    cout << "\nHasil Penilaian:\n";
    
    cout << "Algoritma & Pemrograman: " << (matkul1 >= 60.0 ? "Lulus" : "Tidak Lulus") << endl;
    cout << "Probabilitas & Statistika: " << (matkul2 >= 60.0 ? "Lulus" : "Tidak Lulus") << endl;
    cout << "Matematika Diskrit: " << (matkul3 >= 60.0 ? "Lulus" : "Tidak Lulus") << endl;

    cout << "Nilai Rata-rata Semester ini: " << fixed << setprecision(1) << mean << endl;

    return 0;
}