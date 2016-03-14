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
#include "Stopwatch.h"

class kolejkaTest : public Kolejka, public IRUNNABLE, public Stopwatch
{
public:
	kolejkaTest();
	 ~kolejkaTest();
	 void run(int AmountOfComp);


};

#endif /* KOLEJKATEST_H_ */
