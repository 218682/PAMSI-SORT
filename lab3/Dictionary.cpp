/*
 * Dictionary.cpp
 *
 *  Created on: 19 mar 2016
 *      Author: paula
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

using namespace std;
#include "Dictionary.h"

Dictionary::Dictionary() {
}

Dictionary::~Dictionary() {

}

//int Dictionary::getLines()
//{
//	return lines_;
//}

//void Dictionary::countLine()
//{
//	fstream file;
//	file.open("words.txt", ios::in);
//	string line;
//	int i=0;
//	for (i=0; getline(file,line); ++i)
//	;
//	lines_=1;
//}


void Dictionary::setWords()
{
	fstream file;
	file.open("words.txt", ios::in);
	if (file.good())
	{
		for(int i=0;i<AMOUNT_OF_WORDS;i++)
		{
			if(!file.eof())
			{
				getline(file, words_[i]);
			}
		}
		file.close();
	}

}
string Dictionary::getWords(int i)
{
	return words_[i];
}

