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
	void start();
	void stop();
};

#endif /* IRUNNABLE_H_ */
