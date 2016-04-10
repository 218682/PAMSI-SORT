
#include <ctime>
#include <cstdio>
#include <iostream>
#include "KolejkaTest.h"
#include "Dictionary.h"
#include "Lista.h"
#include "ListaTest.h"
#include "sortTest.hh"
#include "Stos.h"

int main(void)
{ 
  int n=50;
  std::string tab[n];
  /*-----------------------*/
  /*
  Stos rozmiary;
  rozmiary.push(10);
  rozmiary.push(100);
  rozmiary.push(1000);
  rozmiary.push(1000000); */
  /*-----------------------*/
  Kolejka rozmiary;
  SortTest st;
  rozmiary.enqueue(10);
  rozmiary.enqueue(100);
  rozmiary.enqueue(1000);
  rozmiary.enqueue(1000000);
  rozmiary.enqueue(100000000);

  /*-----------------------*/
  while(rozmiary.isEmpty()==0)
    {
      std::cout<<rozmiary.getFront()<<std::endl;
      st.run(rozmiary.getFront());	
      rozmiary.dequeue();
    }
  return 0;
}

