#ifndef KOLEJKA_H
#define KOLEJKA_H
#include <iostream>

#include "IQueue.h"

class Kolejka : public IQueue
{
    public:
    Kolejka();
    ~Kolejka() {delete [] tab_;}
    int getSize();      		//pobiera rozmiar tablicy
    void enqueue(int a);		//dopisuje int a na koniec kolejki
    void display();    			//wyswietla zawartosc tablicy
    void dequeue();

    private:
    int *tab_;     			//tablica dynamiczna, a raczej wskaznik do niej
    int size_;      		//rozmiar tablicy
    int count_;    			//liczba danych przechowywanych w tablicy
    void enlarge_by1();     //zwieksza rozmiar tablicy o 1, metoda nr 1
    void enlarge_x2();      //zwieksza rozmiar tablicy dwukrotnie, metoda nr 2
    void enlarge_x3();		//zwieksza rozmiar tablicy trzykrotnie, metoda nr 3

};


#endif // KOLEJKA_H
