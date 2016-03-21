/*
 * Lista.h
Lista określona jest przez 2 tablice, ktore maja nazwy 'name' i 'next'.
Jeżeli 'element' jest indeksem do tych tablic, to 'name[element]' jest zapamietanym obiektem,
a 'next[element]' indeksem nastepnego obiektu na liscie, o ile nastepny istnieje.
 */

#ifndef LISTA_H_
#define LISTA_H_
#include <iostream>
#include "Dictionary.h"
#include "IList.h"
#include "Stopwatch.h"

class Lista : public IList, public Dictionary, public Stopwatch
{
public:
	Lista();
	virtual ~Lista();
	void addEnd(string a);					//dodaje element do listy (gdziekolwiek)
	void addBegin(string a);
	void addBetween(string a, int index);
	void remove();						//usuwa dowolny element z listy
		//throw(EmptyListExeption);
	int getElem(int index);				//pobiera element ze wskazanego indeksu (bez usuwania)
		//throw(EmptyListExeption);
	/*wyjatki*/
	int getSize();      				//pobiera rozmiar tablicy
	void display(int i);    			//wyswietla zawartosc i-tego elem listy
	int find(string item);				//przeszukuje liste
	int getNext(int i);
	string getName(int i);

private:
    string *name_;     		//wskaznik do tablicy dynamicznej z zapamietanymi obiektami
    int *next_;				//wskaznik do tablicy dyn z indeksami nastepnych elementow
    int size_;      		//rozmiar tablicy
    int count_;    			//liczba danych przechowywanych w tablicy
    void enlarge_by1();     //zwieksza rozmiar tablicy o 1, metoda nr 1
    void enlarge_x2();      //zwieksza rozmiar tablicy dwukrotnie, metoda nr 2
    void enlarge_x3();		//zwieksza rozmiar tablicy trzykrotnie, metoda nr 3
};

#endif /* LISTA_H_ */
