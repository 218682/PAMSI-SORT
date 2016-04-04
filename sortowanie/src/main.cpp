
#include <ctime>
#include <cstdio>
#include <iostream>
#include "KolejkaTest.h"
#include "Dictionary.h"
#include "Lista.h"
#include "ListaTest.h"
#include "sort.hh"
#include "Stos.h"
using namespace std;


int main()
{
  Stos rozmiary;
  rozmiary.push(10);
  rozmiary.push(100);
  rozmiary.push(1000);
  rozmiary.push(1000000);
  
  int n=50;
  srand(time(NULL));
  int tab[n];
  for(int i=0; i<=n; i++)
    {
      tab[i]=rand()%50+1;
    }
  for(int i=0; i<=n; i++)
    {
      std::cout<<tab[i]<<std::endl;
    }
  QS(tab,n);
  for(int i=0; i<=n; i++)
    {
      std::cout<<tab[i]<<std::endl;
    }
  return 0;
}
