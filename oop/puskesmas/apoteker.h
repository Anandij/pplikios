
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
