
#include <ctime>
#include <cstdio>
#include <iostream>
#include "KolejkaTest.h"
#include "Dictionary.h"
#include "Lista.h"
#include "ListaTest.h"
#include "SortingAlg.h"

using namespace std;


int main()
{


//	int tab[11]={2,5,8,3,9,7,6,3,0,1,5};
//
//	for (int i=0;i<11;i++)
//	{
//		cout<<tab[i]<<endl;
//	}
//
//cout<<endl;
//SortingAlg babel;
//babel.bubble(tab,12);
//for (int i=0;i<12;i++)
//{
//	cout<<tab[i]<<endl;
//}
	{
	ListaTest test1;
	Stopwatch mea;									//measure
	mea.setStart();									//wlaczenie stopera
	for (int i=0; i<10; i++)						//10 pomiarow
	{
		test1.run(10);
		mea.setStop();								//wylaczenie stopera
		mea.setRunTime();							//obliczenie czasu wykonywania algorytmu
		//mea.sendToFile();							//przeslanie obliczen do pliku
		printf("%.8f sek\n", mea.getRunTime());
	}
	}
	{
	ListaTest test1;
		Stopwatch mea;									//measure
		mea.setStart();									//wlaczenie stopera
		for (int i=0; i<10; i++)						//10 pomiarow
		{
			test1.run(100);
			mea.setStop();								//wylaczenie stopera
			mea.setRunTime();							//obliczenie czasu wykonywania algorytmu
			//mea.sendToFile();							//przeslanie obliczen do pliku
			printf("%.8f sek\n", mea.getRunTime());
		}
	}
	{
		ListaTest test1;
			Stopwatch mea;									//measure
			mea.setStart();									//wlaczenie stopera
			for (int i=0; i<10; i++)						//10 pomiarow
			{
				test1.run(1000);
				mea.setStop();								//wylaczenie stopera
				mea.setRunTime();							//obliczenie czasu wykonywania algorytmu
				//mea.sendToFile();							//przeslanie obliczen do pliku
				printf("%.8f sek\n", mea.getRunTime());
			}
		}

	{
		ListaTest test1;
			Stopwatch mea;									//measure
			mea.setStart();									//wlaczenie stopera
			for (int i=0; i<10; i++)						//10 pomiarow
			{
				test1.run(100000);
				mea.setStop();								//wylaczenie stopera
				mea.setRunTime();							//obliczenie czasu wykonywania algorytmu
				//mea.sendToFile();							//przeslanie obliczen do pliku
				printf("%.8f sek\n", mea.getRunTime());
			}
		}

	{
		ListaTest test1;
			Stopwatch mea;									//measure
			mea.setStart();									//wlaczenie stopera
			for (int i=0; i<10; i++)						//10 pomiarow
			{
				test1.run(1000000000);
				mea.setStop();								//wylaczenie stopera
				mea.setRunTime();							//obliczenie czasu wykonywania algorytmu
				//mea.sendToFile();							//przeslanie obliczen do pliku
				printf("%.8f sek\n", mea.getRunTime());
			}
		}
    return 0;
}
