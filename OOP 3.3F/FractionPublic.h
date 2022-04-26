//FractionPublic.h
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 
#pragma once
#include "LongLong.h"
class FractionPublic: public LongLong
{
private:
	double d;
public:

	void set_d(double d) { this->d = d; };
	double get_d() const { return d; };


	FractionPublic();
	FractionPublic(double d, LongLong c) :d(d), LongLong(c) {};
	FractionPublic(const FractionPublic& s) : d(s.d), LongLong(s) {};

	FractionPublic& operator ++();
	FractionPublic& operator --();
	FractionPublic operator ++(int);
	FractionPublic operator --(int);

	friend bool operator > (const FractionPublic& c1, const FractionPublic& c2);
	friend bool operator < (const FractionPublic& c1, const FractionPublic& c2);
	friend bool operator == (const FractionPublic& c1, const FractionPublic& c2);
	friend bool operator != (const FractionPublic& c1, const FractionPublic& c2);
	friend bool operator >= (const FractionPublic& c1, const FractionPublic& c2);
	friend bool operator <= (const FractionPublic& c1, const FractionPublic& c2);
};

