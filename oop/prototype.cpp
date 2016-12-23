#include <iostream>
using namespace std;

class nasabah{
	public:
		int get_pin();
		int get_saldo();
		string get_nama();
		int get_norek();
		int setpin (int pin);
		int setsaldo (int saldo);
		void setnama (string nama);
		void setnorek (int norek);
		
	private:
	int pinnas;
	int saldonas;
	string namanas;
	int norekeningnas;
};

nasabah pertama;

int nasabah::get_norek()
{
	return norekeningnas;
}

string nasabah::get_nama()
{
	return namanas;
}

int nasabah::get_pin()
{
	return pinnas;
}

int nasabah::get_saldo()
{
	return saldonas;
}
void nasabah::setnama(string nama)
{
	namanas=nama;
}

void nasabah::setnorek(int norek)
{
	norekeningnas=norek;
}

int nasabah::setpin(int pin)
{
	pinnas=pin;
}

int nasabah::setsaldo(int saldo)
{
	saldonas=saldo;
}

void menu_atm ()
{
			cout<< "\n";
			cout<< "--------------------------------------------------------------------\n";
			cout<< "|| Silahkan Pilih Menu Transaksi Yang akan Anda Lakukan: ||\n";
			cout<< "|| Masukkan angka pertama didalam pilihan anda!		 ||\n";
			cout<< "|| 1. Penarikan Tunai				 	 ||\n";
			cout<< "|| 2. Transfer Uang					 ||\n";
			cout<< "|| 3. Pembayaran					 ||\n";
			cout<< "|| 4. Pembelian						 ||\n";
			cout<< "|| 5. Ganti PIN						 ||\n";
			cout<< "|| 6. Info Rekening					 ||\n";
			cout<< "|| 0. Keluar Menu Utama				     	 ||\n";
			cout<< "-------------------------------------------------------------------\n \n";
}

class atm : public nasabah{
	public:
	int ganti_pin (int pinasli, int pl, int input);
	void informasi (string nama, int rek, int pin, int saldo);
	int ambil (int saldo, int nominal);
	int transfer (int rektu, int nominal, int saldo);
};

int atm::ambil (int saldo, int nominal)
{
	if ((saldo-nominal)<100000)
	{
		cout<<"\n";
		cout<<">> maaf saldo anda tidak cukup untuk melakukan transaksi <<\n";
	}
	else
	{
	saldo=saldo-nominal;
	cout<<">> Sisa saldo anda adalah "; cout<<saldo; cout<<" <<\n";
	return pertama.setsaldo(saldo);
	}
}

int atm::transfer (int rektu, int nominal, int saldo)
{
	if ((saldo-nominal)<100000)
	{
		cout<<"\n";
		cout<<">> Maaf saldo anda tidak cukup untuk melakukan transaksi <<\n";
	}
	else
	{
	saldo=saldo-nominal;
	cout<<">> Anda telah mentransfer sebesar "; cout<<nominal;
	cout<<" ke nomor rekening "; cout<<rektu;
	cout<<" <<\n \n"; cout<<"Sisa saldo anda adalah "; cout<<saldo; cout<<"\n";
	return pertama.setsaldo(saldo);
	}
}

int atm::ganti_pin (int pinasli, int pl, int input)
{
	if (pinasli==pl)
	{
		pinasli=input;
		cout<<">> Pin baru anda adalah "; cout<<input; cout<<" <<\n";
		return pertama.setpin(input);
	}
	else
	{
		cout<<">> Maaf pin lama yang anda masukkan salah! <<\n";
	}
}

void atm::informasi (string nama, int rek, int pin, int saldo)
{
	
	cout<<">> Nomer rekening anda			: "; cout<<rek; cout<<"\n";
	cout<<">> Nama rekening anda			: "; cout<<nama; cout<<"\n";
	cout<<">> Pin rekening anda			: "; cout<<pin; cout<<"\n";
	cout<<">> Jumlah saldo direkening anda		: "; cout<<saldo; cout<<"\n";
}	

int main ()
{
	int input_pin,i, choice;
	pertama.setnama("Faiq");
	pertama.setnorek(987654321);
	pertama.setpin(123456);
	pertama.setsaldo(10000000);
	atm bri;
	
	cout<<"------------------------------\n";
	cout<<"|| SELAMAT DATANG DI ATM BRI ||\n";
	cout<<"------------------------------\n";   
			
	for (i=0;i<3;i++){
		cout<<">> Silahkan masukkan nomer pin anda: ";
		cin>>input_pin;
	if (input_pin != pertama.get_pin())
	{
		cout<<"<< Maaf PIN yang anda masukkan salah\n \n";
		if (i==2)
		{	
			cout<<"\n";
			cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
			cout<<"|| Silahkan tunggu 10 menit untuk melakukan transaksi ulang!\n";
			cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
			return 0;
		}
	}

	else
	{
		do
		{
			menu_atm();
			
			cout<<">> Silahakn masukkan pilihan anda: ";
			cin>>choice;
			cout<<"\n"; cout<<"------------------------------------\n"; 

			int ambil, transfer,rektujuan, bayar, beli, pinbaru, pinlama;
			switch(choice){
				case 0:
					cout<<"---------------------------------------------------------------------\n";
					cout<<"|| Terima kasih telah melakukan transaksi menggunakan Bank BRI ||\n";
					cout<<"||               Jangan Lupa ambil kartu anda!		       ||\n";
					cout<<"---------------------------------------------------------------------\n";
					return 0;
				case 1:
					cout<<">> Masukkan jumlah nominal yang akan diambil: ";
					cin>>ambil;
					bri.ambil(pertama.get_saldo(), ambil);
					break;
				case 2:
					cout<<">> Masukkan nomer rekening tujuan: ";
					cin>>rektujuan;
					cout<<"\n";
					cout<<">> Masukkan jumlah nominal yang akan ditransfer: ";
					cin>>transfer;
					bri.transfer(rektujuan,transfer,pertama.get_saldo());
					break;
					
				case 3:
					cout<<"|||||||||||||||||||||||||||||||||||||||||||||||\n";
					cout<<"|| Maaf Menu Pembayaran sedang dinonaktifkan ||\n";
					cout<<"|||||||||||||||||||||||||||||||||||||||||||||||\n";
					break;
				case 4:
					cout<<"||||||||||||||||||||||||||||||||||||||||||||||\n";
					cout<<"|| Maaf Menu Pembelian sedang dinonaktifkan ||\n";
					cout<<"||||||||||||||||||||||||||||||||||||||||||||||\n";
					break;
				case 5:
					cout<<">> Masukkan Nomor Pin yang lama: \n";
					cin>>pinlama;
					cout<<">> Masukkan nomor pin yang baru: \n";
					cin>>pinbaru;
					bri.ganti_pin (pertama.get_pin(), pinlama, pinbaru);
					//cout<<pertama.get_pin();
					break;
				case 6:
					bri.informasi (pertama.get_nama(), pertama.get_norek(), pertama.get_pin(), pertama.get_saldo());	
					break;
					
				default:
					cout<<"<< maaf pilihan yang anda masukkan salah! >>\n";
					cout<<pertama.get_nama();
					break;			
			}
		} while (choice!=0);
		
	}	
	}
	return 0;
}

