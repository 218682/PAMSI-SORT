/*!
\file
\brief plik zawiera klase z metodami sortowania
*/
#ifndef SORT_HH
#define SORT_HH
#include "Lista.h"
class sort{
  int *pom; //tablica pomocnicza, potrzebna przy scalaniu
public:
  //! metoda sortujaca tablice - sortowanie babelkowe
  void bubblesort(int tab[], int);
  //! algorytm quicksort dzialajacy dla listy
  void QS(Lista &, int, int=0);
  //! metoda sorujaca tablice - sortowanie szybkie
  void QS(int tab[], int, int=0);
  void scal(int tab[], int, int, int);
  void sortowanie_przez_scalanie(int tab[],int, int);
  void sps(int tab[],int);
};
#endif
