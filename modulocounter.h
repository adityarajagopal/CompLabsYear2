#ifndef MODCOUNTER_H
#define MODCOUNTER_H

#include "counter.h"
#include <string>

//modulocounter implemented using counter as composition
/*
class ModuloCounter
{
private:
	int modulo;
	counter c;

public:
	ModuloCounter(int m = 0);

	bool increment();
	void reset();
	int get_count() const;

	friend std::ostream& operator<<(std::ostream& os, const ModuloCounter& mc);
};
*/

//modulocounter implemented as a subclass extending counter
class ModuloCounter : public counter
{
private:
	int modulo;

public:
	ModuloCounter(int m = 0);

	bool increment();
	std::string to_string() const;
};

#endif