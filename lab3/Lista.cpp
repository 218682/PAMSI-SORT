/*
 * Lista.cpp
 *
 *  Created on: 18 mar 2016
 *      Author: paula
 */
#include <cstdlib>
#include <ctime>
#include <iostream>
#define SIZE 2

using namespace std;

#include "Lista.h"
#include "Dictionary.h"

Lista::Lista() {

	size_=SIZE;				//poczatkowy rozmiar tablicy
	count_=1;				//liczba dodanych elementow
	name_ = new string[size_];
	next_=new int[size_];
	//name_[0]=NULL;			//pierwszy element
	next_[0]=1;
}

Lista::~Lista() {
}


int Lista::getSize()
{
    //cout<<"aktualny rozmiar  tablicy: "<<count_<<endl;
    return count_;
}

//
//void Lista::enlarge_by1()
//{
//    if(size_==count_)
//    {
//        size_++;
//        string *tmp1= new string[size_];
//        int *tmp2= new int[size_];
//        for(int i=0; i<count_;i++)
//        {
//            tmp1[i]=name_[i];      //przepisuje dane ze starej tablicy do nowej
//            tmp2[i]=next_[i];
//        }
//        delete [] name_;
//        delete [] next_;
//        name_ =tmp1;
//        next_ =tmp2;
//    }
//
//}

 void Lista::enlarge_x2()
{
    if(size_==count_ )
    {
        size_=size_*2;
        string *tmp1= new string[size_];
        int *tmp2= new int[size_];
        for(int i=0; i<count_;i++)
        {
            tmp1[i]=name_[i];      //przepisuje dane ze starej tablicy do nowej
            tmp2[i]=next_[i];
        }
        delete [] name_;
        delete [] next_;
        name_ =tmp1;
        next_=tmp2;
    }

}

// void Lista::enlarge_x3()
//   {
//       if(size_==count_ )
//       {
//           size_=size_*3;
//           string *tmp1= new string[size_];
//           int *tmp2= new int[size_];
//           for(int i=0; i<count_;i++)
//           {
//               tmp1[i]=name_[i];      //przepisuje dane ze starej tablicy do nowej
//               tmp2[i]=next_[i];
//           }
//           delete [] name_;
//           delete [] next_;
//           name_ =tmp1;
//           next_ =tmp2;
//       }
//
//   }


 void Lista::addEnd(string a)						//powiekszanie x2
 {

		enlarge_x2();
		name_[count_]=a;		//dodawanie slowa na koniec tablicy
		next_[count_]=count_+1;
		count_++;

 }

 void Lista::display(int i)
     {
             cout<<name_[i]<<" ";
             cout<<next_[i]<<endl;
     }


 int Lista::find(string item)
 {
	 	 for (int i=0; i<count_; i++)
	 	 {
	 		 	if(name_[next_[i]]==item)
	 		 	{
	 		 		return next_[i];						//zwraca numer indeksu szukanego slowa
	 		 	}
	 	 }
	 	 return -1;  				//jezeli slowa nie znaleziono
 }

 int Lista::getNext(int i)
 {
	return next_[i] ;
 }
 string Lista::getName(int i)
 {
	 return name_[i];
 }
