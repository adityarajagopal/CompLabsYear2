#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>
#include <string>

class counter
{
private:
	int count;

public:
	counter(int init);

	int get_count() const;
	virtual bool increment();
	void reset();
	virtual std::string to_string() const;

	friend std::ostream& operator<<(std::ostream& os, const counter& c);
};

#endif