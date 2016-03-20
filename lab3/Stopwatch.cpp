/*
 * Stopwatch.cpp
 *
 *  Created on: 13 mar 2016
 *      Author: paula
 */
#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;
#include "Stopwatch.h"

Stopwatch::Stopwatch() {
	start_=0;
	stop_=0;
	RunTime_=0;
}

Stopwatch::~Stopwatch() {
}

double Stopwatch::getRunTime()
{
	return RunTime_;
}

void Stopwatch::setRunTime()
{
	RunTime_=float(stop_-start_)/CLOCKS_PER_SEC;		//double czas_wyk1 = float(koniec-start)/CLOCKS_PER_SEC;
}

void Stopwatch::sendToFile()
{
	FILE *pFile;
	pFile=fopen("data.txt","a");		//otwiera plik do dopisywania (jesli nie istnieje, to go tworzy)
	fprintf (pFile, "%.8f sek\n", RunTime_ );
	fclose(pFile);

}

clock_t Stopwatch::getStart()
{
	return start_;
}

void Stopwatch::setStart()
{
	start_=clock();
}

clock_t Stopwatch::getStop()
{
	return stop_;
}

void Stopwatch::setStop()
{
	stop_=clock();
}

