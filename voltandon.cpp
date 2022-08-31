#include<iostream>
using namespace std;
int main()
{
	double pb, lb, tb, r, td, v;
	cout << "==Menghitung Jumlah Volume Balok dan Volume Tandon==\n";
	cout << "Masukkan panjang balok = ";
	cin >> pb;
	cout << "Masukkan lebar balok = ";
	cin >> lb;
	cout << "Masukkan tinggi balok = ";
	cin >> tb;
	cout << "Masukkan jari-jari tandon = ";
	cin >> r;
	cout << "Masukkkan tinggi tandon = ";
	cin >> td;
	
	v = (pb*lb*tb) + (3.14*r*r*td);
	
	cout << "Jumlah Volume Balok dan Tandon = " << v << endl;
	return 0;
}
