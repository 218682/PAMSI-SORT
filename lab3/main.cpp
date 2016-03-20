
#include <ctime>
#include <cstdio>
#include <iostream>
#include "KolejkaTest.h"
#include "Dictionary.h"
#include "Lista.h"

using namespace std;


int main()
{

	Lista word;
	word.setRandomWords();
//	for (int i=0; i<100; i++)
//	{
//		cout<<slownik.getWords(i)<<endl;
//	}

	cout<<word.getRandomWords()<<endl;
		//cout<<slownik.countLine()<<endl;
//	KolejkaTest test1;
//
//	Stopwatch mea;	//measure
//	mea.setStart();
//	for (int i=0; i<10; i++)
//	{
//	test1.run(10);
//	mea.setStop();
//	mea.setRunTime();
//	//mea.sendToFile();
//	printf("%.8f sek\n", mea.getRunTime());
//	}


    return 0;
}
