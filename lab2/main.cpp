
#include <ctime>
#include <cstdio>

#include "kolejka.h"

using namespace std;

int main()
{
    clock_t start, koniec, czas;
//----------------------------------------------------------
{
     Kolejka xxx;
    start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<11;i++)//algorytm dla 10^1
        {
        xxx.enqueue(i);
        //cout<<"dopisano "<<i<<endl;
        }
    koniec = clock();   //biezacy czas systemowy w ms
    //long delta=(difftime(koniec,start)); // czas dzialan w ms
    double czas_wyk1 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8f sek\n",czas_wyk1);
    }

//-----------------------------------------------------------
    /*{
    Kolejka xxx;
     start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<1001;i++)//dla 10^3
        {
        xxx.enqueue(i);
        //cout<<"dopisano "<<i<<endl;
        }
    koniec = clock();   //biezacy czas systemowy w ms
    //long delta=(difftime(koniec,start)); // czas dzialan w ms
    double czas_wyk2 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk2);
}
//-----------------------------------------------------------
{
    Kolejka xxx;
     start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<100001;i++)//dla 10^5
        {
        xxx.enqueue(i);
        //cout<<"dopisano "<<i<<endl;
        }
    koniec = clock();   //biezacy czas systemowy w ms
    //long delta=(difftime(koniec,start)); // czas dzialan w ms
    double czas_wyk3 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk3);
    xxx.getSize();
}

////-----------------------------------------------------------
{
    Kolejka xxx;
     start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<1000001;i++)//dla 10^6
        {
        xxx.enqueue(i);
        //cout<<"dopisano "<<i<<endl;
        }
    koniec = clock();   //biezacy czas systemowy w ms
    //long delta=(difftime(koniec,start)); // czas dzialan w ms
    double czas_wyk4 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk4);
}
//-----------------------------------------------------------
{
Kolejka xxx;
     start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<1000000001;i++)//dla 10^9
        {
        xxx.enqueue(i);

        }
    koniec = clock();   //biezacy czas systemowy w ms
    double czas_wyk5 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk5);
}
*/
//-----------------------------------------------------------


    return 0;
}
