#include <iostream>

#include <cstdlib>
#include "Kolejka.h"


#define SIZE 2      //poczatkowy rozmiar tablicy
using namespace std;

Kolejka::Kolejka()  //konstruktor
{
    size_=SIZE;
    count_=0;		//liczba dodanych elementow
    tab_ = new int[size_];

}

    int Kolejka::getSize()
    {
        cout<<"aktualny rozmiar  tablicy: "<<count_<<endl;
        return count_;
    }


    void Kolejka::enlarge_by1()
    {
        if(size_==count_)
        {
            size_++;
            int *tmp= new int[size_];
            for(int i=0; i<count_;i++)
            {
                tmp[i]=tab_[i];      //przepisuje dane ze starej tablicy do nowej
            }
            delete [] tab_;
            tab_ =tmp;
        }

    }

     void Kolejka::enlarge_x2()
    {
        if(size_==count_ )
        {
            size_=size_*2;
            int *tmp= new int[size_];
            for(int i=0; i<count_;i++)
            {
                tmp[i]=tab_[i];      //przepisuje dane ze starej tablicy do nowej
            }
            delete [] tab_;
            tab_ =tmp;
        }

    }

     void Kolejka::enlarge_x3()
       {
           if(size_==count_ )
           {
               size_=size_*3;
               int *tmp= new int[size_];
               for(int i=0; i<count_;i++)
               {
                   tmp[i]=tab_[i];      //przepisuje dane ze starej tablicy do nowej
               }
               delete [] tab_;
               tab_ =tmp;
           }

       }


     void Kolejka::enqueue(int a)
     {
    		enlarge_x2();
			tab_[count_]=a;				//dozwolone zwiekszanie tablicy tylko x2
			count_++;

     }

    void Kolejka::display()
    {
        for(int i=0;i<count_;i++)
        {
            cout<<tab_[i]<<endl;
        }
    }
