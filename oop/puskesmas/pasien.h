

class pasien
{
	private:
		char* nama;
		char* alamat;
		char* pekerjaan;
		char* lahir;
		char* umur;	
	
	public:
		void set_nama(char* name);
		void set_alamat(char* add);
		void set_pekerjaan(char* job);
		void set_lahir(char* born);
		void set_umur(char* age); 
		
		char* get_pekerjaan();
		char* get_nama();
		char* get_alamat();
		char* get_lahir();
		char* get_umur();
};

void pasien::set_nama(char* name)
{
	this->nama = name;
}

char* pasien::get_nama()
{
	return nama;
}

void pasien::set_lahir(char* born)
{
	this->lahir = born;
}

char* pasien::get_lahir()
{
	return lahir;
}

void pasien::set_umur(char* age)
{
	this->umur = age;
}

char* pasien::get_umur()
{
	return umur;
}

void pasien::set_alamat(char* add)
{
	this->alamat = add;
} 

char* pasien::get_alamat()
{
	return alamat;
}

void pasien::set_pekerjaan(char* job)
{
	this->pekerjaan = job;
} 

char* pasien::get_pekerjaan()
{
	return pekerjaan;
}
/*
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
}*/
