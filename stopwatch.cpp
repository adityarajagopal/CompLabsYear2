#include "stopwatch.h"

//stopwatch as implemented with counter as composition
/*
stopwatch::stopwatch(){}

void stopwatch::increment()
{
	seconds.increment();

	if(seconds.get_count() >= 60)
	{
		seconds.reset();
		minutes.increment();
	}

	if(minutes.get_count() >= 60)
	{
		minutes.reset();
		hours.increment();
	}
}

void stopwatch::reset()
{
	seconds.reset();
	minutes.reset();
	hours.reset();
}

std::ostream& operator<<(std::ostream& os, const stopwatch& sw)
{
	os << sw.hours << ":" << sw.minutes << ":" << sw.seconds;
	return os;
}
*/

//stopwatch as implemented with modulocounter as composition

stopwatch::stopwatch(int m):hours(0), minutes(m), seconds(m) {} 

void stopwatch::increment()
{
	if(seconds.increment())
		if(minutes.increment())
			hours.increment();
}

void stopwatch::reset()
{
	seconds.reset();
	minutes.reset();
	hours.reset();
}

std::ostream& operator<<(std::ostream& os, const stopwatch& sw)
{
	os << sw.hours << ":" << sw.minutes << ":" << sw.seconds;
	return os;
}



