//FractionPrivate.cpp
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 
#include "FractionPrivate.h"
#include "LongLong.h"
using namespace std;

FractionPrivate::FractionPrivate()
	:d(0),LongLong(0,0)
{
}

FractionPrivate& FractionPrivate::operator=(const FractionPrivate& h)
{
	d = h.d;
	return *this;	
}

FractionPrivate::operator string() const
{
	return LongLong::operator std::string();
}

FractionPrivate& FractionPrivate::operator++()
{
	LongLong::operator++();
	return *this;
}

FractionPrivate& FractionPrivate::operator--()
{
	LongLong::operator--();
	return *this;
}

FractionPrivate FractionPrivate::operator++(int)
{
	FractionPrivate t(*this);
	LongLong::operator++();
	return t;
}

FractionPrivate FractionPrivate::operator--(int)
{
	FractionPrivate t(*this);
	LongLong::operator--();
	return t;
}

ostream& operator<<(ostream& out, const FractionPrivate& r)
{
	out << string(r);
	return out;
}

istream& operator>>(istream& in, FractionPrivate& r)
{
	cout << "c: " << endl; in >> (LongLong&)r;
	cout << "d: " << endl; in >> r.d;
	cout << endl;
	return in;
}

bool operator>(const FractionPrivate& c1, const FractionPrivate& c2)
{
	return ((LongLong)c1 > (LongLong)c2 ||
		(LongLong)c1 == (LongLong)c2 &&
		c1.get_d() > c2.get_d());
}

bool operator<(const FractionPrivate& c1, const FractionPrivate& c2)
{
	return ((LongLong)c1 < (LongLong)c2 ||
		(LongLong)c1 == (LongLong)c2 &&
			c1.get_d() < c2.get_d());

}

bool operator==(const FractionPrivate& c1, const FractionPrivate& c2)
{
	return  (LongLong)c1 == (LongLong)c2 &&
		c1.get_d() == c2.get_d();

}

bool operator!=(const FractionPrivate& c1, const FractionPrivate& c2)
{
	return !(c1 == c2);
}

bool operator>=(const FractionPrivate& c1, const FractionPrivate& c2)
{
	return !(c1 < c2);
}

bool operator<=(const FractionPrivate& c1, const FractionPrivate& c2)
{
	return !(c1 > c2);
}
