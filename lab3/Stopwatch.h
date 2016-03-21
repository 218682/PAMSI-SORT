/*
 * Stopwatch.h
 *
 *  Created on: 13 mar 2016
 *      Author: paula
 */

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

class Stopwatch {
public:
	Stopwatch();
	virtual ~Stopwatch();
	double getRunTime();
	void setRunTime();
	void sendToFile(int number);
	clock_t getStart();
	void setStart();
	clock_t getStop();
	void setStop();

private:
	double RunTime_;		//czas wykonania algorytmu
	clock_t start_, stop_;
};

#endif /* STOPWATCH_H_ */
