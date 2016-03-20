/*
 * Lista.h
 *
 *  Created on: 18 mar 2016
 *      Author: paula
 */

#ifndef LISTA_H_
#define LISTA_H_
#include <iostream>
#include "Dictionary.h"
#include "IList.h"

class Lista : public IList, public Dictionary
{
public:
	Lista();
	virtual ~Lista();
	int size();						//zwraca aktualny rozmiar listy
	void add(int a);				//dodaje element do listy (gdziekolwiek)
	void remove();					//usuwa dowolny element z listy
		//throw(EmptyListExeption);
	int getElem(int index);			//pobiera element ze wskazanego indeksu (bez usuwania)
		//throw(EmptyListExeption);
	/*wyjatki*/
	void setRandomWords();     		//zapisuje losowe slowo ze slownika do zmiennej randomWord_
	string getRandomWords();		//zwraca losowe slowo ze slownika

private:
	string randomWord_;
};

#endif /* LISTA_H_ */
