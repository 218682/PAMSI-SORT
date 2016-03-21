
#include <ctime>
#include <cstdio>
#include <iostream>
#include "KolejkaTest.h"
#include "Dictionary.h"
#include "Lista.h"
#include "ListaTest.h"

using namespace std;


int main()
{

	ListaTest test1;
//	cout<<"przeszukiwanie listy 10-elementowej:"<<endl;
//	test1.run(10);
//	cout<<"przeszukiwanie listy 100-elementowej:"<<endl;
//	test1.run(100);
//	cout<<"przeszukiwanie listy 1000-elementowej:"<<endl;
//	test1.run(1000);
	cout<<"przeszukiwanie listy 100000-elementowej:"<<endl;
	test1.run(100000);
	cout<<"przeszukiwanie listy 1000000-elementowej:"<<endl;
	test1.run(1000000);


//	ListaTest test1;
//	Stopwatch mea;									//measure
//	mea.setStart();									//wlaczenie stopera
//	for (int i=0; i<10; i++)						//10 pomiarow
//	{
//		test1.run(10);
//		mea.setStop();								//wylaczenie stopera
//		mea.setRunTime();							//obliczenie czasu wykonywania algorytmu
//		//mea.sendToFile();							//przeslanie obliczen do pliku
//		printf("%.8f sek\n", mea.getRunTime());
//	}
//
//


    return 0;
}
