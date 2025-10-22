#include <iostream>
using namespace std;

int main (){
	
	int umur;
	
	cout << "+-----------------------------------------+\n";
    cout << "| PENDETEKSI KLASIFIKASI TONTONAN V.1.3.2 |\n";
    cout << "+-----------------------------------------+\n";
	cout << "Masukkan umur anda\t: ";
	cin >> umur;
	
	
	if(umur < 13) {
		cout << "\nKategori yang boleh ditonton: SU\n";
	} else if (umur > 13 && umur <= 16) {
        cout << "\nKategori yang boleh ditonton: R13\n";
	} else if (umur > 17 && umur <= 20) {
		cout << "\nKategori yang boleh ditonton: D17\n";
	} else {
		cout << "\nKategori yang boleh ditonton: D21\n";
	}
	
	return 0;
}
