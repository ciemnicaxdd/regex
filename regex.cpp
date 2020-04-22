#include <iostream>
#include <fstream>
#include <regex>
#include <string>

using namespace std;

class wyrazenia
{
ifstream plik1;
ofstream plik2;

  public:
wyrazenia();
~wyrazenia();

        void sprawdz();
};

wyrazenia::wyrazenia()
{
plik1.open("plik1.txt");
plik2.open("plik2.txt");
}

void wyrazenia::sprawdz()
{
	string x;


	regex regularne("[0-9]{2}-[0-9]{3}");

	while(!plik1.eof())
{
plik1>>x;

if(regex_match(x,regularne))
		{
			plik2<<x<<endl;
		}
}

}

wyrazenia::~wyrazenia()
{
plik1.close();
plik2.close();
}

int main()
{
wyrazenia t1;
t1.sprawdz();


    return 0;
}
