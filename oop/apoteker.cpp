#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class apoteker
{
	private:
		char* Kode;
		char* Nama;
	
	public:
		void setKD(char* kode);
		void setnama(char* name);
		char* getKD();
		char* getnama();
};

void apoteker::setKD(char* kode)
{
	this->Kode = kode;
}

char* apoteker::getKD()
{
	return Kode;
}

void apoteker::setnama(char* name)
{
	this->Nama = name;
}

char* apoteker::getnama()
{
	return Nama;
}

int main()
{
	apoteker apotik;
	char* kode = "001";
	char* nama = "faiq firdausy";
	
	apotik.setKD(kode);
	apotik.setnama(nama);
	
	cout<<apotik.getKD()<<endl;
	cout<<apotik.getnama()<<endl;
}
