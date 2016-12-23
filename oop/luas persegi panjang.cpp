#include<iostream>

using namespace std;

class values
{
	protected:
		int P, L;
	public:
		void Nilai(int a, int b);
		/*{
			P=a;
			L=b;
		}*/
};

void values::Nilai(int a, int b)
{
	P=a;
	L=b;
}

class LuasPersegiPanjang: public values
{
	public:
		int luas()
		{
			return (P*L);
		}
};

class KelilingPersegiPanjang:public values
{
	public:
		int keliling()
		{
			return (2*(P+L));
		}
};

int main()
{
	LuasPersegiPanjang L;
	KelilingPersegiPanjang K;
	L.Nilai(4,5);
	K.Nilai(4,5);
	cout<<"Luas adalah "<<L.luas()<<endl;
	cout<<"Keliling adalah "<<K.keliling()<<endl;
	
}
