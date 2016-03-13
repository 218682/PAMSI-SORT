#ifndef KOLEJKA_H
#define KOLEJKA_H
#include <iostream>

#include "IQUEUE.h"

class Kolejka : public IQUEUE
{
    public:
    Kolejka();
    ~Kolejka() {delete [] tab_;}
    int getSize();      //pobiera rozmiar tablicy
    void enqueue(int a);	//dopisuje int a na koniec kolejki
    void display();    //wyswietla zawartosc tablicy

    private:
    int *tab_;       //tablica dynamiczna, a raczej wskaznik do niej
    int size_;      //rozmiar tablicy
    int count_;      //liczba danych przechowywanych w tablicy
    void enlarge_by1();     //zwieksza rozmiar tablicy o 1
    void enlarge_x2();      //zwieksza rozmiar tablicy dwukrotnie
    void enlarge_x3();	//zwieksza rozmiar tablicy trzykrotnie
};


#endif // KOLEJKA_H
