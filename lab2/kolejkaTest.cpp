/*
 * kolejkaTest.cpp
 *
 *  Created on: 13 mar 2016
 *      Author: paula
 */
#include <iostream>
#include <cstdio>
using namespace std;

#include "kolejkaTest.h"



kolejkaTest::kolejkaTest() {
	// TODO Auto-generated constructor stub

}

kolejkaTest::~kolejkaTest() {
	// TODO Auto-generated destructor stub
}

void kolejkaTest::run(int AmountOfComp)		//liczba skladnikow do dodania
{
	Kolejka que;	//queue
	Stopwatch mea;
	mea.setStart();
	for (int i=0; i<AmountOfComp; i++)
	{
		que.enqueue(i,1);	//dopisanie elementu do kolejki
	}
	mea.setStop();
	mea.setRunTime();
	mea.sendToFile();
	printf("%.8fl sek\n", mea.getRunTime());
}
