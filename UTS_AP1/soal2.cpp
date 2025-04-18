#include <iostream>
#include <cmath>

using  namespace  std;

int main () {
    system("cls");
    string biner;
    int desimal = 0;
    cout<<"Masukkan bil bulat (biner) : "; cin>>biner;

    int panjang = biner.length();

    for(int i = 0; i < panjang; i++) {
        if(biner[i] == '1') {
            desimal += pow(2,panjang - 1 - i);
        } else if (biner[i] != '0') {
            cout<<"Input kode biner = " <<biner <<endl;
            cout<<"Pesan Rusak!" <<endl;
            return 0;
        }
    }
    cout<<"Input kode biner = " <<biner <<endl;
    cout<<"Angka desimal dari " <<biner <<" adalah = " <<desimal <<endl;

    return 0;
}