#include <iostream>
using namespace std;

int main()
{
	long int beli,disc,total;
	cout<<"Masukkan Pembelian = ";cin>>beli;
	if (beli>=100000)
	{
	disc = 0.1*beli;
	total = beli-disc;
	}
	else
	{
	disc = 0.05*beli;
	total = beli-disc;
	}	
	cout<<"Jadi Pembelian adalah = "<<beli<<endl;
	cout<<"Jadi Discon adalah = "<<disc<<endl;
	cout<<"Jadi Total adalah = "<<total<<endl;
	return 0;
}
