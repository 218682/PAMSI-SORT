//! \file sortTest.cpp zawiera rozwiniecia metod klasy sortTest
#include "sortTest.hh"
#include <iostream>
void SortTest::run(int ile)
{
  stoper czas;
  int *tab= new int[ile];
  /*=======================================*/
  srand(time(NULL));
  for(int i=0; i<10; i++)
    {

      for (int j=0; j<ile;j++)
	{
	  tab[j]=std::rand()%ile+1;
	  //tab[j]=j;
	}
   /*========================================*/
      czas.start();
      //QS(tab,ile);
      sps(tab, ile-1);
      czas.stop();
      std::cout<<czas.getTime()<<std::endl;
      czas.dumpToFile("sps");
      /* for (int i=0; i<=ile;i++)
      	{
      	   list.display(i);
      }
      std::cout<<std::endl;*/
    }
}
/*{
  stoper czas;
  *=======================================*
  Dictionary dict;
  dict.setWords();	//wczytuje slownik do tablicy
  srand(time(NULL));
  for(int i=0; i<10; i++)
    {
      Lista list;
      
      for (int j=0; j<ile;j++)	//lista randomowych wyrazow
	{
	  list.add(dict.RandomWords(), list.getCount() );
	  //list.display(i);
	}
   *========================================*
      czas.start();
      QS(list,list.getCount());
      czas.stop();
      std::cout<<czas.getTime()<<std::endl;
      czas.dumpToFile("p");
      * for (int i=0; i<=ile;i++)
      	{
      	   list.display(i);
      }
      std::cout<<std::endl;*
    }
}
*/
