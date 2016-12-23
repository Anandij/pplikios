#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class ploket
{
	private:
		char* id;
		char* nama;
		char* telp;
	
	public:
		void setID(char* nip);
		void setNAMA(char* name);
		void setTELP(char* phone);
		
		char* getID();
		char* getNAMA();
		char* getTELP();
};

void ploket::setID(char* nip)
{
	this->id = nip;
}

char* ploket::getID()
{
	return id;
}

void ploket::setNAMA(char* name)
{
	this->nama = name;
}

char* ploket::getNAMA()
{
	return nama;
}

void ploket::setTELP(char* phone)
{
	this->telp = phone;
}

char* ploket::getTELP()
{
	return telp;
}

int main()
{
	ploket loket;
	char* id = "12345";
	char* nama = "anandi jaya santoso";
	char* telp = "1234567";
	
	loket.setID(id);
	loket.setNAMA(nama);
	loket.setTELP(telp);
	
	cout<<loket.getID()<<endl;
	cout<<loket.getNAMA()<<endl;
	cout<<loket.getTELP()<<endl;
}
