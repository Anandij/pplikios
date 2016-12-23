#include<iostream>
#include<string.h>
#include "dokter.h"
#include<stdio.h>

using namespace std;

int main()
{
	dokter dr;
	char nip[15]; //= "5114100096";
	char nama[50]; //= "Anandi Jaya Santoso";
	char telp[15]; //= "085770490773";
	char alamat[50]; //= "jl. Surabaya";
	char penyakit[50];
	
	
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
	
	gets(penyakit);
	cout<<penyakit<<endl;
	
	if(strcmp("panas", penyakit)==0)
	{
		cout<<"jembut"<<endl;
	}
	
	return 0;
}
