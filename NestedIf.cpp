#include <iostream>
#include <cstdio>
using namespace std;
// nested if / percabangan bersarang
int main(int argc, char *argv[]) {
     //merubah warna text pada output program
     system ("color 50");
     cout << "\t" << "NESTED IF" << endl;
     printf ("\n");
	int A = 0;
	int B = 1;
	if (A != B) {
	     if (B == 1) {
	          //aksi ketika A dan B benar
	          cout << "A != B && B == 1" << endl;
	     } else {
	          //aksi ketika A benar dan B salah
	          cout << "A != B && B != 1" << endl;
	     }
	} else {
	     //aksi ketika A dan B salah
	     cout << "A && B == false" << endl;
	}
	//program akan selesai ketika ditekan enter
	cin.get();
	return 0;
}