/*!
\file
\brief plik zawiera funkcje z metodami sortowania
*/
#ifndef SORT_HH
#define SORT_HH
void bubblesort(int tab[], int size)
{
  int tmp;
  for(int i=0; i< size; i++)
    {
      for(int j=0; j<size; j++)
	{
	  if(tab[j]>tab[j+1])
	    {
	      tmp=tab[j];
	      tab[j]=tab[j+1];
	      tab[j+1]=tmp;
	    }
	}
    }
}
/*
QS.hh
algorytm quicksort dla zaimplementowany dla listy
*/
/*
class QS: public Lista
{
  int rozmiar=getSize();
  if (rozmiar>1)
    {
      int SrElem=getElem(rozmiar/2);
      int lewy=0;
      int prawy=rozmiar;
      int x;
      do
	{
	  while (getElem(lewy)<SrElem) lewy++;
	  while (getElem(prawy)>SrElem) prawy--;
	  if (lewy<=prawy)
	    {
	      x=getElem(lewy);
      
    }
	

    }*/
void QS(int tab[], int size, int min=0)
{
  if(size>1)
    {
      int SrElem=tab[size/2];
      int lewy=min;
      int prawy=size;
      int pomo;
      do
	{
	  while (tab[lewy]<SrElem) lewy++;
	  while (tab[prawy]>SrElem) prawy--;
	  if(lewy<=prawy)
	    {
	      pomo=tab[lewy];
	      tab[lewy]=tab[prawy];
	      tab[prawy]=pomo;
	      lewy ++; prawy--;
	    }
	}while(lewy<=prawy);
      if(prawy>min) QS(tab, prawy, min);
      if(lewy<size) QS(tab, size, lewy);
    }
}

#endif
