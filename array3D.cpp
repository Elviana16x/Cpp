/****************** -> C++_Elviana16x <- *******************/
#include <iostream>
#include <array>
using namespace std;
//Array 3 dimensi
int main(int argc, char *argv[]) {
	//mendeklarasikan data Array
	int a[2] [3] [3] {
	     {//mengisi nilai array halaman 1
	          {1, 0, 3}, {4, 1, 2}, {8, 2, 1}, },
	     {//mengisi nilai array halaman 2
	          {6, 8, 3}, {4, 3, 6}, {5, 9, 2} }
	};
	//looping untuk menampilkan nilai Array
	//pengulangan untuk mencetak halaman Array
	for (auto halaman {0}; halaman < 2; halaman++) {
	     //mencetak halaman
	     cout << "Halaman ke-" << halaman + 1 << endl;
	     //blok pengulangan untuk mcetak baris
	     for (int baris {0}; baris < 3; baris++) {
	          cout << "[ ";
	          //blok pengulagan untuk mencetak kolom
	          for (int kolom {0}; kolom < 3; kolom++) {
	               //menampilkan hasil pengulangan
	               cout << a[halaman][baris][kolom] << " ";
	          }
	          //untuk mencetak baris baru nilai Array
	          cout << "]" << endl;
	     }
	     //untuk mencetak halaman baru Array
	     cout << endl;
	}
	//menampilkan nilai index Array
	cout << "Index Array a[1][0][1] bernilai : " << a[1][0][1] << endl;
	cin.get();
	return 0;
}