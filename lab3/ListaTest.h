/*
 * ListaTest.h
 *
 *  Created on: 20 mar 2016
 *      Author: paula
 */

#ifndef LISTATEST_H_
#define LISTATEST_H_
#include <iostream>
#include "Lista.h"


class ListaTest : public Lista
{
public:
	ListaTest();
	virtual ~ListaTest();
	void run(int AmountOfComp);

};

#endif /* LISTATEST_H_ */
