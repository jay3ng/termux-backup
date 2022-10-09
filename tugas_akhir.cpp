#include <iostream>
using namespace std;

int main()
{
	cout<<"=================================="<<endl;
	cout<<"||Nama : Muhamad Ilham Tribiasto||"<<endl;
	cout<<"||NIM  : 221011400483		||"<<endl;
	cout<<"||Kelas: 01TPLM006		||"<<endl;
	cout<<"=================================="<<endl;
	const float pi = 3.14;
	float jari_jari, volume, luas;
	cout<<" Masukan Jari-Jari = ";cin>>jari_jari;
	cout<<"=================================="<<endl;
	volume = 4/3*pi*jari_jari*jari_jari*jari_jari;
	luas = 4*pi*jari_jari;
	cout<<" Volume nya adalah = "<<volume<<endl;
	cout<<"=================================="<<endl;
	cout<<" Luas nya adalah = "<<luas<<endl;
	cout<<"=================================="<<endl;
	return 0;
}
