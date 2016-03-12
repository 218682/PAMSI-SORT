#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#define ROZMIAR 2      //poczatkowy rozmiar tablicy

using namespace std;



class IQUEUE        //interfejs - posiada tylko i wylacznie metody czysto wirtualne, nie posiada pól
{
    public:
    void dopisz(int a);
    private:
    virtual void zwieksz_o1() const =0;     //zwieksza rozmiar tablicy o 1
    virtual void zwieksz_x2() =0;      //zwieksza rozmiar tablicy dwukrotnie
    virtual void zwieksz_x3() =0;
};

class IRUNNABLE
{
    private:
    //clock_t start, stop, time;
    public:
    virtual bool run()=0;
    virtual bool prepare(int size)=0;
};

class STOPER
{
    void start();
    void stop();
    void GetTime();
    void SendToFile();
};


class Tablica : public IQUEUE
{
    public:
    Tablica();
    ~Tablica() {delete [] tab_;}
    int get_rozm();      //pobiera rozmiar tablicy
    //void dopisz(int a);
    void wyswietl();    //wyswietla zawartosc tablicy

    private:
    int *tab_;       //tablica dynamiczna
    int rozm_;      //rozmiar tablicy
    int licz_;      //liczba danych przechowywanych w tablicy
    //void zwieksz_o1();     //zwieksza rozmiar tablicy o 1
    //void zwieksz_x2();      //zwieksza rozmiar tablicy dwukrotnie
};

/*metody*/

Tablica::Tablica()  //konstruktor
{
    rozm_=ROZMIAR;
    licz_=0;
    tab_ = new int[rozm_];

}

    int Tablica::get_rozm()
    {
        cout<<"aktualny rozmiar  tablicy: "<<licz_<<endl;
        return licz_;
    }


    void IQUEUE/*Tablica*/::zwieksz_o1()
    {
        if(rozm_==licz_)
        {
            rozm_++;
            int *tmp= new int[rozm_];
            for(int i=0; i<licz_;i++)
            {
                tmp[i]=tab_[i];      //przepisuje dane ze starej tablicy do nowej
            }
            delete [] tab_;
            tab_ =tmp;
        }

    }

     void IQUEUE/*Tablica*/::zwieksz_x2()
    {
        if(rozm_==licz_ )
        {
            rozm_=rozm_*2;
            int *tmp= new int[rozm_];
            for(int i=0; i<licz_;i++)
            {
                tmp[i]=tab_[i];      //przepisuje dane ze starej tablicy do nowej
            }
            delete [] tab_;
            tab_ =tmp;
        }

    }

 void IQUEUE/*Tablica*/::zwieksz_x3()
    {
        if(rozm_==licz_ )
        {
            rozm_=rozm_*3;
            int *tmp= new int[rozm_];
            for(int i=0; i<licz_;i++)
            {
                tmp[i]=tab_[i];      //przepisuje dane ze starej tablicy do nowej
            }
            delete [] tab_;
            tab_ =tmp;
        }

    }

    void Tablica::dopisz(int a)
    {
            //zwieksz_o1();
            zwieksz_x2();
            tab_[licz_]=a;
            licz_++;
    }

    void Tablica::wyswietl()
    {
        for(int i=0;i<licz_;i++)
        {
            cout<<tab_[i]<<endl;
        }
    }



int main()
{
    clock_t start, koniec, czas;
//----------------------------------------------------------
{
     Tablica xxx;
    start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<11;i++)//algorytm dla 10^1
        {
        xxx.dopisz(i);
        //cout<<"dopisano "<<i<<endl;
        }
    koniec = clock();   //biezacy czas systemowy w ms
    //long delta=(difftime(koniec,start)); // czas dzialan w ms
    double czas_wyk1 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk1);
    }

//-----------------------------------------------------------
    {
    Tablica xxx;
     start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<1001;i++)//dla 10^3
        {
        xxx.dopisz(i);
        //cout<<"dopisano "<<i<<endl;
        }
    koniec = clock();   //biezacy czas systemowy w ms
    //long delta=(difftime(koniec,start)); // czas dzialan w ms
    double czas_wyk2 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk2);
}
//-----------------------------------------------------------
{
    Tablica xxx;
     start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<100001;i++)//dla 10^5
        {
        xxx.dopisz(i);
        //cout<<"dopisano "<<i<<endl;
        }
    koniec = clock();   //biezacy czas systemowy w ms
    //long delta=(difftime(koniec,start)); // czas dzialan w ms
    double czas_wyk3 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk3);
    xxx.get_rozm();
}

////-----------------------------------------------------------
{
    Tablica xxx;
     start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<1000001;i++)//dla 10^6
        {
        xxx.dopisz(i);
        //cout<<"dopisano "<<i<<endl;
        }
    koniec = clock();   //biezacy czas systemowy w ms
    //long delta=(difftime(koniec,start)); // czas dzialan w ms
    double czas_wyk4 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk4);
}
//-----------------------------------------------------------
{
Tablica xxx;
     start=clock();  //biezacy czas systemowy w ms
    for(int i=1;i<1000000001;i++)//dla 10^9
        {
        xxx.dopisz(i);

        }
    koniec = clock();   //biezacy czas systemowy w ms
    double czas_wyk5 = float(koniec-start)/CLOCKS_PER_SEC;
    printf("%.8fl sek\n",czas_wyk5);
}

//-----------------------------------------------------------


    return 0;
}
