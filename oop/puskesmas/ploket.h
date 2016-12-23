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

