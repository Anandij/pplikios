#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "pasien.h"
#include "dokter.h"
#include "ploket.h"
#include "apoteker.h"

using namespace std;

void cek_penyakit(char penyakit[50])
{
	if(strcmp("panas",penyakit)==0)
	{
		cout<<"\nUntuk penyakit panas ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"-----------------------------------------------\n";
		cout<<"|   Silahkan resep dibawa ke bagian apoteker  |\n";
		cout<<"|               Panas tubuh                   |\n";
		cout<<"-----------------------------------------------\n";
	}
	else if(strcmp("pusing",penyakit)==0)
	{
		cout<<"\nUntuk penyakit pusing ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"-----------------------------------------------\n";
		cout<<"|   Silahkan resep dibawa ke bagian apoteker  |\n";
		cout<<"|               Pusing Kepala                 |\n";
		cout<<"-----------------------------------------------\n";
	}
	else if(strcmp("pilek",penyakit)==0)
	{
		cout<<"\nUntuk penyakit pilek ini biasanya anda kurang istirahat, \njadi anda terlalu banyak kesibukan sehingga anda lupa dengan diri anda\n\n";
		cout<<"-----------------------------------------------\n";
		cout<<"|   Silahkan resep dibawa ke bagian apoteker  |\n";
		cout<<"|             Hidung Tersumbat                |\n";
		cout<<"-----------------------------------------------\n";
	}
	else
	{
		cout<<"Anda baik-baik saja\n";
	}
	
	system("PAUSE");
	system("CLS");
}

void ambil(char nama[50], char umur[10], char alamat[50], char penyakit[50])
{
	pasien patient;
	apoteker apotik;
	char obat1[20] = "Paracetamol";
	char obat2[20] = "Antalgin";
	char obat3[20] = "Oskadon";
	
	cout<<"Nama \t\t: "<<patient.get_nama()<<endl;
	cout<<"Umur \t\t: "<<patient.get_umur()<<endl;
	cout<<"Alamat \t\t: "<<patient.get_alamat()<<endl;
	
	if(strcmp("panas",penyakit)==0)
	{
		apotik.setnama(obat1);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	else if(strcmp("pusing",penyakit)==0)
	{
		apotik.setnama(obat2);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	else if(strcmp("pilek",penyakit)==0)
	{
		apotik.setnama(obat3);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	cout<<"-----------------------------------------\n";
	cout<<"diminum 3x sehari sebelum makan\n";
	cout<<"1tablet untuk dewasa\n\n";
	cout<<"Terima Kasih, Semoga Cepat Sembuh :)";
}

int main()
{
	pasien patient;
	dokter dr;
	ploket loket;
	apoteker apotik;
	
	char obat1[20] = "Paracetamol";
	char obat2[20] = "Antalgin";
	char obat3[20] = "Oskadon";
	
	char id[15] = "111222333444";
	char nama_p[50] = "Faiq Firdausy";
	loket.setID(id);
	loket.setNAMA(nama_p);
	
	char nip[15] = "5114100063";
	char nama_dr[50] = "dr. Hamka Aminullah";
	dr.setNip(nip);
	dr.setNama(nama_dr);
	
	char nama[50];
	char lahir[20];
	char umur[10];
	char alamat[50];
	char pekerjaan[25];
	char penyakit[50];
	
	cout<<"---------------------------"<<endl;
	cout<<"SISTEM INFORMASI PUSKESMAS"<<endl;
	cout<<"---------------------------\n"<<endl;
	cout<<"Silahkan Daftar Terlebih Dahulu !!\n\n";
	
	cout<<"Nama Lengkap \t: ";
	gets(nama);
	patient.set_nama(nama);
	cout<<"Tanggal Lahir \t: ";	
	gets(lahir);
	patient.set_lahir(lahir);
	cout<<"Umur \t\t: ";
	gets(umur);
	patient.set_umur(umur);	
	cout<<"Alamat \t\t: ";
	gets(alamat);
	patient.set_alamat(alamat);
	cout<<"Pekerjaan \t: ";
	gets(pekerjaan);
	patient.set_pekerjaan(pekerjaan);
	
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
			
	cout<<"umum"<<endl;
	cout<<dr.getNip()<<endl;
	cout<<dr.getNama()<<endl;
	
	cout<<"\nNama \t: "<<patient.get_nama()<<endl;
	cout<<"Keluhan : ";
	gets(penyakit);

	cek_penyakit(penyakit);
	//ambil(nama, umur, alamat, penyakit);	
	
	cout<<"Nama \t\t: "<<patient.get_nama()<<endl;
	cout<<"Umur \t\t: "<<patient.get_umur()<<endl;
	cout<<"Alamat \t\t: "<<patient.get_alamat()<<endl;
	
	if(strcmp("panas",penyakit)==0)
	{
		apotik.setnama(obat1);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	else if(strcmp("pusing",penyakit)==0)
	{
		apotik.setnama(obat2);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	else if(strcmp("pilek",penyakit)==0)
	{
		apotik.setnama(obat3);
		cout<<"obat anda \t: "<<apotik.getnama()<<"\n";
	}
	
	cout<<"diminum 3x sehari sebelum makan\n";
	cout<<"1tablet untuk dewasa\n\n";
	cout<<"Terima Kasih, Semoga Cepat Sembuh :)";																																																																																																																																																																							
}
