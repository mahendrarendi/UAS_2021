// program peta naga sakti menggunakan algoritma undirected, weighted graph menggunakan adjacency list
#include <iostream>
#include <string>
using namespace std;

int main() {
    // deklarasi varibel
	int jumlah;
	
	cout<<"* Jumlah kota yang berada di kerajaan Britan : "<< endl;
    cin>>jumlah;
    
    char kota[jumlah];
    char jarak_kota[jumlah];
	char sisi_kota[jumlah];
	
	// perulangan untuk banyak_kota Britan
	for(int i = 1; i <= jumlah; ++i) {
		cout << "Masukkan nama kota ke-" << i << " : ";
		cin >> kota[i];
	}
	
	int banyak_kota = sizeof(kota)/sizeof(kota[0]);
//	for(int i = 1; i <= banyak_kota; ++i) cout << kota[i];
	
	//deklarasi graph                                            
	//menampilkan graph yang terjadi
	cout<< "* Sisi-sisinya adalah : " << endl << endl;
	for(int i = 1; i <= jumlah; i++){
		for(int j = 1; j <= jumlah; j++){
			std::cout<<kota[i]<<kota[j]<<" ";
			sisi_kota[i] = i, j;
		}
	}
	
	int banyak_sisi = sizeof(sisi_kota)/sizeof(sisi_kota[0]);
	cout<< endl << "SISI KOTA ";
	for(int i = 1; i <= banyak_sisi; ++i) cout << sisi_kota[i] << endl;
	
	cout<< endl << endl << "* Panjang jalan antar kota : " << endl;
	cout<<"* seluruh jalan yang ada dalam kerajaan britan dan panjang jalannya : "<< endl;
	for(int i = 1; i <= jumlah; i++){
		for(int j = 1; j <= jumlah; j++)
		{
			std::cout<< "Panjang " << kota[i] << kota[j] << " : " << endl;
			// cin >> jarak_kota[k];
			cin >> jarak_kota[i];
			cout<<"("<<kota[i]<<","<<kota[j]<<","<<jarak_kota[i]<<") ";
		}
	}
	// cout<<"panjang "<<kota1<<" ke "<<kota2<< ": "; cin>> hasil1;

	//menampilkan tempat pedagang berada
	cout<<"* kota tempat pedagang sekarang berada : "<<endl<<endl;
	cout<<kota[0];
	
	cout<<endl<<endl;
	
	//menampilkan kota yang diserang naga
	cout<<"* kota yang diserang naga : "<<endl<<endl;
	cout<<kota[2]; 
	
	cout<<endl<<endl;
	
	//menampilkan kota yang terdapat kastil
	cout<<"* kota yang memiliki kastil : "<<endl<<endl;
	int b = sizeof(kota) / sizeof(kota[0]);
	int kota_terakhir = kota[b-1];
	cout<<kota_terakhir;
	
	cout<<endl<<endl;
	
	//menampilkan vertex tercepat untuk selamat	
	cout<<"* jalur yang paling cepat ditempuh : "<<endl<<endl;
	cout<<kota[0]<<"-"<<kota[1]<<"-"<<kota[2]<<endl;
	
	cout<<endl<<endl;
	
	//total edge yang harus ditempuh
	cout<< "* dengan jarak : "<<endl<<endl;
	int a = sizeof(jarak_kota) / sizeof(jarak_kota[0]);
	int jarakkota_terakhir = jarak_kota[a-1];
	cout<<jarak_kota[0]+jarakkota_terakhir<<endl<<endl;
  cout<<"\ndevelop @mahendrarendi";
	return 0;
}
