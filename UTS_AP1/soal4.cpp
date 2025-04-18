#include <iostream>
using namespace std;

int main() {
    system("cls");
    string mantra;
    int i = 0;
    int jumlahVokal = 0;

    cout << "Penyihir dan Mantra Ajaib" << endl;
    cout << "Mantra : ";
    cin >> mantra;

    int panjang = mantra.length();

    while (i < panjang) { 
        char karakter = mantra[i];
        if (karakter == 'A' || karakter == 'I' || karakter == 'U' || karakter == 'E' || karakter == 'O' ||
            karakter == 'a' || karakter == 'i' || karakter == 'u' || karakter == 'e' || karakter == 'o') {
            jumlahVokal++;
        }
        i++;
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan Mantra: " << jumlahVokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }

    return 0;
}