#include <iostream>
using namespace std;
//belajar percabangan dengan switch case
int main (int argc, char *argv[]) {
     //merubah warna tulisan program di terminal
     system ("color 50");
     //mendklarasikan variabel
     float penjumlahan;
     float pengurangan;
     float perkalian;
     float pembagian;
     float nilai_1;
     float nilai_2;
     char aritmatika;
     //ini adalah keyboard untuk input nilai
     cout << "masukan nilai 1 : ";
     cin >> nilai_1;
     cout <<"masukan aritmatika : ";
     cin >> aritmatika;
     cout << "masukan nilai 2 : ";
     cin >> nilai_2;
     //ini adalah kondisi / percabangan
     //hanya akan mengambil program yang berniali true
     switch (aritmatika) {
          case '+':     //kondisi 1
          penjumlahan = nilai_1 + nilai_2;
          cout << "\n" << "hasil perhitungan" << "\n" << nilai_1 << " " << aritmatika << " " << nilai_2 << " = " << penjumlahan << endl;
          break;
          case '-':     //kondisi 2
          pengurangan = nilai_1 - nilai_2;
          cout << "\n" << "hasil perhitungan" << "\n" << nilai_1 << " " << aritmatika << " " << nilai_2 << " = " << pengurangan << endl;
          break;
          case '*':     //kondisi 3
          perkalian = nilai_1 * nilai_2;
          cout << "\n" << "hasil perhitungan" << "\n" << nilai_1 << " " << aritmatika << " " << nilai_2 << " = " << perkalian << endl;
          break;
          case '/':     //kondisi 4
          pembagian = nilai_1 / nilai_2;
          cout << "\n" << "hasil perhitungan" << "\n" << nilai_1 << " " << aritmatika << " " << nilai_2 << " = " << pembagian << endl;
          break;
          //jika ke empat kondisi benilai false
          //program yang akan dijalankan adalah default
          //jika salah satu dari ke empat kondisi bernilai true
          //default tidak akan dieksekusi oleh program
          default : {
               cout << "\n" << "aritmatika yang anda masukan salah" << endl;
          }
     }
     cin.get();
	return 0;
}