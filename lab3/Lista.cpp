/*
 * Lista.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: paula
 */
#include <cstdlib>
#include <ctime>
#include <iostream>


using namespace std;

#include "Lista.h"
#include "Dictionary.h"

Lista::Lista() {

}

Lista::~Lista() {
}

void Lista::setRandomWords()
{
	Dictionary any;
	any.setWords();
	srand(time(NULL));
	string rW;
	int i;
	i=(rand() % AMOUNT_OF_WORDS);
	rW=any.getWords(i);

	randomWord_=rW;
}

string Lista::getRandomWords()
{
	return randomWord_;
}
