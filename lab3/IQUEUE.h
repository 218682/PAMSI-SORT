/*
 * IQUEUE.h
 *
 *  Created on: 13 mar 2016
 *      Author: paula
 */

#ifndef IQUEUE_H_
#define IQUEUE_H_

class IQUEUE {			//interfejs
public:
	IQUEUE();
	virtual ~IQUEUE();
	virtual void enqueue(int a, int b) =0;		//dodaje element int a na koncu kolejki (int b to jest numer metody zwiekszania rozmiaru, zostanie dopracowane)
		//throw(TakenIndexExeption);
	int size();		//aktualny rozmiar
	bool isEmpty();		//sprawdza czy tablica nie jest pusta
	void dequeue();		//usuwa pierwszy element kolejki (LIFO)
		//throw(EmptyQueueExeption);

};

#endif /* IQUEUE_H_ */
