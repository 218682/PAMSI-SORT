/*
 * IList.h
 *
 *  Created on: 14 mar 2016
 *      Author: paula
 */

#ifndef ILIST_H_
#define ILIST_H_

class IList {
public:
	IList();
	virtual ~IList();
	int size();				//zwraca aktualny rozmiar listy
	void add(int a);		//dodaje element do listy (gdziekolwiek)
	void remove();			//usuwa dowolny element z listy
		//throw(EmptyListExeption);
	int getElem(int index);	//pobiera element ze wskazanego indeksu (bez usuwania)
		//throw(EmptyListExeption);
	/*wyjatki*/


};

#endif /* ILIST_H_ */
