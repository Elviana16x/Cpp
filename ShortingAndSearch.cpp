#include <iostream>
#include <cstdio>
#include <array>
using namespace std;
//fungsi pengurutan data
//logika (jika (n < n -1) lakukan pertukaran data)
void bubbleSort (int *array, int ukuran) {
     int tukar;
     for (int data {0}; data < ukuran -1; data++) {
          for (int nilai {ukuran -1}; nilai > data; nilai--) {
               //melakukan pertukaran data
               if (array[nilai] < array[nilai -1]) {
                    tukar = array[nilai];
                    array[nilai] = array[nilai -1];
                    array[nilai -1] = tukar;
               }
          }
     }
}
//fungsi pencarian nilai tengah
//logika ((nilai awal + nilai akhir) / 2 = nilai tengah)
int binarySearch (int array[], int awal, int akhir, int nilai) {
     int tengah;
     bool menemukan {false};
     //mencari nilai tengah
     while (awal <= akhir && !menemukan) {
          tengah = (awal + akhir) / 2;
          if (array[tengah] == nilai) {
               menemukan = true;
          } else {
               if (nilai < array[tengah]) {
                    akhir = tengah - 1;
               } else {
                    awal = tengah + 1;
               }
          }
     }
     return menemukan ? tengah : -1;
}
//fungsi untuk mencetak nilai array
void cetakArray (int array[], int ukuran) {
     printf ("[");
     for (int data {0}; data < ukuran; data++) {
          cout << array[data];
          if (data != ukuran - 1) cout << ", ";
     }
     printf ("] \n");
}
//mengisi dan menampilkan data array
int main(int argc, char *argv[]) {
     int data[7] {0, 4, 2, 1, 5, 7, 9};
     cout << "\t" << "pengurutan dan pencarian" << "\n\n" << endl;
     system ("color 05");
     cout << "melakukan pengurutan data" << "\n" << endl;
     //memanggil fungsi cetakArray (menampilkan isi array)
     cout <<"isi array -> "; cetakArray(data, 7);
     printf ("\n");
     cout << "sebelum : "; cetakArray (data, 7);
     //memanggil fungsi bubbleSort (pengurutan)
     bubbleSort (data, 7);
     cout << "sesudah : "; cetakArray (data, 7);
     printf ("\n");
     //menampilkan data array yang sudah diurutkan
     cout << "melakukan pencarian data"<< "\n" << endl;
     cout <<"isi array -> "; cetakArray(data, 7);
     cout << "| 0 sampai 6 = benar | -1 = salah |" << endl;
     printf ("\n");
     //memanggil fungsi binarySearch (pencarian)
	cout << "mencari nilai index -> 0 = " << binarySearch (data, 0, 6, 0) << endl;
	cout << "mencari nilai index -> 1 = " << binarySearch (data, 0, 6, 1) << endl;
	cout << "mencari nilai index -> 2 = " << binarySearch (data, 0, 6, 2)<< endl;
	cout << "mencari nilai index -> 3 = " << binarySearch (data, 0, 6, 3) << endl;
	cout << "mencari nilai index -> 4 = " << binarySearch (data, 0, 6, 4) << endl;
	cout << "mencari nilai index -> 5 = " << binarySearch (data, 0, 6, 5) << endl;
	cout << "mencari nilai index -> 6 = " << binarySearch (data, 0, 6, 6) << endl;
	cout << "mencari nilai index -> 7 = " << binarySearch (data, 0, 6, 7) << endl;
	cout << "mencari nilai index -> 8 = " << binarySearch (data, 0, 6, 8) << endl;
	cout << "mencari nilai index -> 9 = " << binarySearch (data, 0, 6, 9) << endl;
     return 0;
}
