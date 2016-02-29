#include <iostream>
#include <stdio.h>
#define ROZMIAR 5

using namespace std;

class DodajTab
{
private:
	
public:
	void DodajEl(int nowy[], int elem, int rozmiar);
	int PowiekszTabo1(int wieksza[], int rozmiar);
	bool CzyPrzekr(int rozmiar, int ileEl);

};


/*funkcja void tabcpy() dopisuje jedna tablice na koniec drugiej*/
void tabcpy(int nowy[], int stary[], int rozmiar)
{

	for (int i = 0; i<rozmiar; i++)
	{
		if (nowy[i] == 0)
		{
			nowy[i] = stary[i+rozmiar];
			nowy[i + 1] = 0;
		}
	}
}
void DodajTab::DodajEl(int nowy[], int elem, int rozmiar)
{

	for (int i = 0; i<rozmiar; i++)
	{
		if (nowy[i] == 0)
		{
			nowy[i] = elem;
			nowy[i + 1] = 0;
		}
	}
}


int DodajTab::PowiekszTabo1(int wieksza[], int rozm)
{
	rozm = rozm + 1;
	return wieksza[rozm];
}
/*
bool DodajTab::CzyPrzekr(int rozmiar, int ileEl)
{
	
}
*/
int main()
{
	int rozm=ROZMIAR;
	int elem = 44;
	int *wsk1=new int[rozm];         //alokowanie pamieci
	int *wsk2=new int[rozm];
	for(int i=0; i<rozm; i++)
	{
	wsk1[i]=i;
	wsk2[i]=i+rozm;
	}
	for(int i=0;i<rozm;i++)
	{
	cout<<wsk1[i]<<endl;
	}
	for(int i=0;i<rozm;i++)
	{
	cout<<wsk2[i]<<endl;
	}
		
	cout<<*wsk2<<endl;
	system("pause");


}
