/*
 * kolejkaTest.h
 *
 *  Created on: 13 mar 2016
 *      Author: paula
 */

#ifndef KOLEJKATEST_H_
#define KOLEJKATEST_H_

#include <string>
#include "kolejka.h"
#include "IRUNNABLE.h"

class kolejkaTest : public Kolejka, public IRUNNABLE
{
public:
	kolejkaTest();
	virtual ~kolejkaTest();
	void getRunTime();
	void sendToFile();

private:
	double runTime;
};

#endif /* KOLEJKATEST_H_ */
