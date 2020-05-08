#include <iostream>
using namespace std;
//belajar menghitung luas persegi panjang
int main () {
    //mendeklarasikan varabel
    int panjang;
    int lebar;
    int luas;
    //keyboard untuk mengisi variabel panjang
    cout << "masukan nilai panjang : ";
    cin >> panjang;
    //keyboard untuk mengisi variabel lebar
    cout << "masukan nilai lebar : ";
    cin >> lebar;
    //melakukan perhitungan dan menampung hasilnya
    //yang ditulis dari keyboard panjang dan lebar
    luas = panjang * lebar;
    //menampilkan informasi program
    cout << "hasil prhitungan" << endl;
    //menampilkan nilai variabel
    cout << "panjang = " << panjang << endl;
    cout << "lebar = " << lebar << endl;
    //menampilkan hasil perhitungan
    cout << "luas persegi panjang" << endl;
    cout << panjang << " * " << lebar << " = " << luas << endl;
    cin.get();
    return 0;
}