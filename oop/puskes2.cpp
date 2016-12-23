#include<iostream>
#include<stdio.h>
#include<string.h>
#include "pasien.h"

using namespace std;

int main()
{
	pasien patient;
	char* nama;
	char* lahir;
	int umur;
	char* alamat;
	char* pekerjaan;
	
	patient.set_nama(nama);
	patient.set_lahir(lahir);
	patient.set_umur(umur);
	patient.set_alamat(alamat);
	patient.set_pekerjaan(pekerjaan);
}
