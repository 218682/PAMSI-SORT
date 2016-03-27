/*
 * IStack.h
 *
 *  Created on: 14 mar 2016
 *      Author: paula
 */

#ifndef ISTACK_H_
#define ISTACK_H_

class IStack {
public:
	IStack();
	virtual ~IStack();
	int getSize();			//aktualny rozmiar
	bool isEmpty();
	int top();				//pobiera element z góry stosu, bez usuwania go
	void push(int a);		//doklada kolejny element na wierzch stosu
	int pop();				//zdejmuje element ze stosu, usuwa go


};

#endif /* ISTACK_H_ */
