#include<iostream>
using namespace std;

int main (){
	int baris, kolom;
	string ulang;
	
	do{
	cout<<"Selamat Datang di Program Pembuat Pola Segitiga"<<endl;
	cout<<"==============================================="<<endl;
	
	cout<<"\nMasukan Jumlah Bintang : ";
	cin>>baris;
	
	for(int jml_baris = 1; jml_baris <= baris; jml_baris++){
		for(int jml_kolom = 1; jml_kolom < jml_baris; jml_kolom++){
			cout<<"* ";
		}
		cout<<"*"<<endl;
	} 
	  cout<<"\n\n==============================================";
	  cout<<"\nApakah Anda ingin mengulang proses ini (y/t): ";cin>>ulang;
	  system("cls");
	} while(ulang == "y");
	
	cout<<"===  Terimakasih  ===";
	cout<<"\n    Keep Coding  ";
}
