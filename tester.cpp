#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

class dokter
{
	private:
		int NIP;
		string nama;
		int telp;
		string alamat;
	public:
		void setNip(int id);
		void setNama(string name);
		void setTelp(int num);
		void setAlamat(string add);

		int getNip();
		string getNama();
		int getTelp();
		string getAlamat();
};

void dokter::setNip(int id)
{
	this->NIP=id;
}

int dokter::getNip()
{
	return NIP;
}

void dokter::setNama(string name)
{
	this->nama=name;
}

string dokter::getNama()
{
	return nama;
}

void dokter::setTelp(int num)
{
	this->telp=num;
}

int dokter::getTelp()
{
	return telp;
}

void dokter::setAlamat(string add)
{
	this->alamat=add;
}

string dokter::getAlamat()
{
	return alamat;
}

int main()
{
	dokter dr;
	int nip; //= "5114100096";
	string nama; //= "Anandi Jaya Santoso";
	int telp; //= "085770490773";
	string alamat; //= "jl. Surabaya";
	
	cin>>nip;
	dr.setNip(nip);
	cin.getline(nama,25);
	dr.setNama(nama);
	cin>>telp;
	dr.setTelp(telp);
	cin>>alamat;
	dr.setAlamat(alamat);
	
	cout<<"NIP \t: "<<dr.getNip()<<endl;
	cout<<"Nama \t: "<<dr.getNama()<<endl;
	cout<<"Telp \t: "<<dr.getTelp()<<endl;
	cout<<"Alamat \t: "<<dr.getAlamat()<<endl;
	
	return 0;
}
