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
	virtual void enqueue(int a, int b) =0;

};

#endif /* IQUEUE_H_ */
