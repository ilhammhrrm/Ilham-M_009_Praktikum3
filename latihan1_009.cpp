#include <iostream>
using namespace std;

int H(const char*s){
	int x = 0;
	for (;*s!='\0';s++)
	++x;
	return x;
}

int main() {
	char kata[100];
	
	cout<<"Tuliskan Kata   : "; cin.getline(kata,100);
	cout<<endl;
	cout<<"Jumlah Karakter : "<<H(kata)<<" Huruf"<<endl;
	}
