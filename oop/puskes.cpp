#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include<string>

using namespace std;

class pasien
{
	public:
		void set_nama(string name);
		void set_alamat(string add);
		void set_pekerjaan(string job);
		int set_umur(int age); 
		char set_lahir(char born);
		
		string get_pekerjaan();
		string get_nama();
		string get_alamat();
		char get_lahir();
		int get_umur();
		
	private:
		string nama;
		string alamat;
		string pekerjaan;
		char lahir;
		int umur;	
};

void pasien::set_nama(string name)
{
	nama=name;
}

string pasien::get_nama()
{
	return nama;
}

void pasien::set_alamat(string add)
{
	alamat=add;
}

string pasien::get_alamat()
{
	return alamat;
}

int pasien::set_umur(int age)
{
	umur=age;
}

int pasien::get_umur()
{
	return umur;
}

char pasien::set_lahir(char born)
{
	lahir=born;
}

char pasien::get_lahir()
{
	return lahir;
}

void pasien::set_pekerjaan(string job)
{
	pekerjaan=job;
}

string pasien::get_pekerjaan()
{
	return pekerjaan;
}






















void cek_penyakit(string penyakit)
{
	if(penyakit=="panas")
	{
		cout<<"\nUntuk penyakit panas ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"Silahkan resep dibawa ke bagian apoteker\n";
		cout<<"----------------------------------\n";
		cout<<"|            Panas tubuh         |\n";
		cout<<"|   Resep Obat Anda Paracetamol  |\n";
		cout<<"----------------------------------\n";
	}
	else if(penyakit=="pusing")
	{
		cout<<"\nUntuk penyakit pusing ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"Silahkan resep dibawa ke bagian apoteker";
		cout<<"----------------------------------\n";
		cout<<"|         Pusing Kepala          |\n";
		cout<<"|     Resep Obat Anda Oskadon    |\n";
		cout<<"----------------------------------\n";
	}
	else if(penyakit=="pilek")
	{
		cout<<"\nUntuk penyakit pilek ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"Silahkan resep dibawa ke bagian apoteker\n";
		cout<<"----------------------------------\n";
		cout<<"|       Hidung Tersumbat         |\n";
		cout<<"|   Resep Obat Anda Atalgin      |\n";
		cout<<"----------------------------------\n";
	}
	else if(penyakit=="flu")
	{
		cout<<"\nUntuk penyakit flu ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"Silahkan resep dibawa ke bagian apoteker\n";
		cout<<"----------------------------------\n";
		cout<<"|            Hidung Flu          |\n";
		cout<<"|   Resep Obat Anda Ultraflu     |\n";
		cout<<"----------------------------------\n";
	}
	else if(penyakit=="diare")
	{
		cout<<"\nUntuk penyakit diare ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"Silahkan resep dibawa ke bagian apoteker\n";
		cout<<"----------------------------------\n";
		cout<<"|            Perut Diare         |\n";
		cout<<"|   Resep Obat Anda Entrostop    |\n";
		cout<<"----------------------------------\n";
	}
	else
	{
		cout<<"Penyakit anda tidak ditemukan\n";
	}
}

void ambil(string nama, int umur, string alamat, string penyakit)
{
	cout<<"Nama\t\t: "<<nama<<endl;
	cout<<"Umur\t\t: "<<umur<<endl;
	cout<<"Alamat\t\t: "<<alamat<<endl;
	cout<<"penyakit\t: "<<penyakit<<endl;
	cout<<"\n";
	if(penyakit=="panas")
	{
		cout<<"Obat : Paracetamol\n";
		cout<<"diminum 3x sehari sebelum makan\n";
		cout<<"1tablet untuk dewasa\n";
	}
	cout<<"\nTerima kasih semoga cepat sembuh :)"<<endl;
}

int main()
{
	pasien patient;
	
	string penyakit;
	string nama, alamat, pekerjaan;
	char lahir[15];
	int umur;
	
	cout<<"---------------------------"<<endl;
	cout<<"SISTEM INFORMASI PUSKESMAS"<<endl;
	cout<<"---------------------------\n"<<endl;
	cout<<"Silahkan Daftar Terlebih Dahulu !!\n\n";
	
	cout<<"Nama Lengkap\t: ";
	getline(cin,nama);
	cout<<"Tanggal Lahir\t: ";
	gets(lahir);
	cout<<"Umur\t\t: ";
	cin>>umur;
	getchar();
	cout<<"Alamat Lengkap\t: ";
	getline(cin,alamat);
	cout<<"Pekerjaan \t: ";
	getline(cin,pekerjaan);
	
	cout<<"\nPendaftaran Sukses !!!\n"<<endl;
	system("PAUSE");
	system("CLS");
	
	cout<<"Harap Tunggu ";
	Sleep(2000);
	cout<<". ";
	Sleep(2000);
	cout<<". ";
	Sleep(2000);
	cout<<". \n\n";
	Sleep(2000);
	
	cout<<"Nama Anda \t: "<<nama<<endl;
	cout<<"Keluhan\t\t: ";
	getline(cin,penyakit);
	cout<<penyakit<<endl;
	cek_penyakit(penyakit);
	system("PAUSE");
	system("CLS");
	
	ambil(nama, umur, alamat, penyakit);
	
	//patient.set_nama(nama);
	//patient.set_lahir(lahir[15]);
	//patient.set_umur(umur);
	//patient.set_alamat(alamat);
	//patient.set_pekerjaan(pekerjaan);
	return 0;
}
