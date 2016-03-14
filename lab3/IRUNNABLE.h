/*
 * IRUNNABLE.h
 *
 *  Created on: 13 mar 2016
 *      Author: paula
 */

#ifndef IRUNNABLE_H_
#define IRUNNABLE_H_

class IRUNNABLE {
public:
	IRUNNABLE();
	virtual ~IRUNNABLE();
	virtual void run(int AmountOfComp)=0;		//informacja czy dobiegl
	//virtual bool prepared()=0;	//inf czy gotowy
};

#endif /* IRUNNABLE_H_ */
