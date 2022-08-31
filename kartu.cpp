#include<iostream>
#include<string>
using namespace std;
int main()
{
	string kartu, bonus;
	
	cout << "==Kartu Langganan==\n";
	cout << "Masukkan nama kartu : ";
	cin >> kartu;
	
	if (kartu=="gold") {
      cout << "Masukkan bonus anda : ";
      cin >> bonus;
      if (bonus=="ambil bonus") {
         cout << "Selamat Bonus Anda telah Diambil" << endl;      
		 } else {
         cout << "Selamat Bonus Anda telah masuk ke Poin" << endl;      
		 }
   } else {
      if (kartu=="remium") {
         cout << "Masukkan bonus anda";
         cin >> bonus;
         if (bonus=="ambil bonus") {
            cout << "Selamat Bonus Anda telah Diambil" << endl;         
			} else {
			cout << "Selamat bonus Anda telah masuk ke Poin" << endl;         
			} 
			}else {
			cout << "Buat kartu baru" << endl;      
			}
   }
	return 0;
}
