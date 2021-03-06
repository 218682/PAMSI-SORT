//! \file Sort.cpp zawiera rozwiniecia metod klasy sort
#include "sort.hh"
void sort::bubblesort(int tab[], int size)
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
//! algorytm quicksort zaimplementowany dla listy
void sort::QS(Lista &l, int size, int min)
{
  if(size>1)
    {
      std::string pivot=l.getName((size+min)/2);
      int lewy=min;
      int prawy=size;
      std::string pomo;
      do
	{
	  for (;l.getName(lewy)<pivot;lewy++);
	  for (;l.getName(prawy)>pivot;prawy--);
	  if(lewy<=prawy)
	    {
	      pomo=l.getName(lewy);
	      // l.display(prawy);
	      l.remove(lewy);
	      l.add(l.getName(prawy),lewy);
	      //l.display(lewy);
	      // std::cout<<std::endl;
	      l.remove(prawy);
	      l.add(pomo,prawy);
	      lewy ++; prawy--;
	    }
	}while(lewy<=prawy);
      if(prawy>min) QS(l, prawy, min);
      if(lewy<size) QS(l, size, lewy);
    }
}
//! metoda sorujaca tablice - sortowanie szybkie
void sort::QS(int tab[], int size, int min)
{
  if(size>1)
    {
      //srand(time(NULL));
      //int r=std::rand()%(size-min)+min;
      int pivot=tab[size];//[r];//[(size+min)/2];
      int lewy=min;
      int prawy=size;
      int pomo;
      do
	{
	  for (;tab[lewy]<pivot;lewy++);
	  for (;tab[prawy]>pivot;prawy--);
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
//algorytm pobrany ze strony algorytm.edu.pl
//scalenie posortowanych podtablic
void sort::scal(int tab[], int lewy, int srodek, int prawy) 
{
  int i = lewy, j = srodek + 1;
 
  //kopiujemy lewą i prawą część tablicy do tablicy pomocniczej
  for(int i = lewy;i<=prawy; i++) 
    pom[i] = tab[i];  
 
  //scalenie dwóch podtablic pomocniczych i zapisanie ich 
  //we własciwej tablicy
  for(int k=lewy;k<=prawy;k++) 
  if(i<=srodek)
    if(j <= prawy)
         if(pom[j]<pom[i])
             tab[k] = pom[j++];
         else
             tab[k] = pom[i++];
    else
        tab[k] = pom[i++];
  else
      tab[k] = pom[j++];
}
 
void sort::sortowanie_przez_scalanie(int tab[],int lewy, int prawy)
{
  //gdy mamy jeden element, to jest on już posortowany
  if(prawy<=lewy) return; 
 
  //znajdujemy srodek podtablicy
  int srodek = (prawy+lewy)/2;
 
  //dzielimy tablice na częsć lewą i prawa
  sortowanie_przez_scalanie(tab, lewy, srodek); 
  sortowanie_przez_scalanie(tab, srodek+1, prawy);
 
  //scalamy dwie już posortowane tablice
  scal(tab, lewy, srodek, prawy);
}
void sort::sps(int tab[],int n)
{
  pom = new int[n];
  sortowanie_przez_scalanie(tab,0,n-1);
}
