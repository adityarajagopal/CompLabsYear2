#ifndef STOPWATCH_H
#define STOPWATCH_H

#include "counter.h"
#include "modulocounter.h"
#include <iostream>

//stopwatch using counter as composition
/*
class stopwatch
{
private:
	counter hours;
	counter minutes;
	counter seconds;

public:
	stopwatch();

	void increment();
	void reset();

	friend std::ostream& operator<<(std::ostream& os, const stopwatch& sw);
};
*/

//stopwatch using modulocounter as composition
class stopwatch
{
private:
	counter hours;
	ModuloCounter minutes;
	ModuloCounter seconds;

public:
	stopwatch(int m = 0);

	void increment();
	void reset();

	friend std::ostream& operator<<(std::ostream& os, const stopwatch& sw);

};

#endif