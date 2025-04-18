#include <iostream>

using namespace std;

int main () {
    system("cls");
    int bil;
    cout<<"Kode Rahasia Batu Bertuah" <<endl;
    cout<<"Masukkan sebuah bilangan bulat : "; cin>>bil;

   if (bil < 1) {
    cout<<"tidak";
   } else {
    while (bil % 2 == 0) {
        bil /= 2;
    }
    if (bil == 1) {
        cout<<"ya";
    } else {
        cout<<"tidak";
    }
   }

}