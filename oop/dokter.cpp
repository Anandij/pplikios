#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

class dokter
{
	private:
		char* NIP;
		char* nama;
		char* telp;
		char* alamat;
	public:
		void setNip(char* id);
		void setNama(char* name);
		void setTelp(char* num);
		void setAlamat(char* add);
		
		char* getAlamat();
		char* getNip();
		char* getNama();
		char* getTelp();
};

void dokter::setNip(char* id)
{
	this->NIP=id;
}

char* dokter::getNip()
{
	return NIP;
}

void dokter::setNama(char* name)
{
	this->nama=name;
}

char* dokter::getNama()
{
	return nama;
}

void dokter::setTelp(char* num)
{
	this->telp=num;
}

char* dokter::getTelp()
{
	return telp;
}

void dokter::setAlamat(char* add)
{
	this->alamat=add;
}

char* dokter::getAlamat()
{
	return alamat;
}

int main()
{
	dokter dr;
	char nip[15]; //= "5114100096";
	char nama[50]; //= "Anandi Jaya Santoso";
	char telp[15]; //= "085770490773";
	char alamat[50]; //= "jl. Surabaya";
	
	gets(nip);
	dr.setNip(nip);
	gets(nama);
	dr.setNama(nama);
	gets(telp);
	dr.setTelp(telp);
	gets(alamat);
	dr.setAlamat(alamat);
		
	cout<<"NIP \t: "<<dr.getNip()<<endl;
	cout<<"Nama \t: "<<dr.getNama()<<endl;
	cout<<"Telp \t: "<<dr.getTelp()<<endl;
	cout<<"Alamat \t: "<<dr.getAlamat()<<endl;
	
	return 0;
}
