
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
