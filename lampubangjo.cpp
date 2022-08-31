#include<iostream>
using namespace std;
int main()
{
	string lampu;
	
	cout << "==Lampu Lalu Lintas==\n";
	cout << "Masukkan nama lampu : ";
	cin >> lampu;
	
	if(lampu == "hijau") {
		cout << "Silahkan jalan!" << endl;
	} else if(lampu == "merah") {
		cout << "Harap berhenti!" << endl;
	} else {
		cout << "Hati-hati" << endl;
	}
	
	return 0;
}
