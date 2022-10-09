#include <iostream>
using namespace std;

int main()
{
	int panjang,lebar, tinggi, luas, volume;
	panjang = 50;
	lebar = 50;
	tinggi = 50;
	luas = (2*panjang*lebar)+(2*panjang*tinggi)+(2*panjang*lebar);
	volume = panjang*lebar*tinggi;
	cout<<"Jadi luasnya adalah = "<<luas<<endl;
	cout<<"Jadi volumenya adalah = "<<volume<<endl;
	return 0;
}
