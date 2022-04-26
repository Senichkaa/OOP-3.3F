//FractionPrivate.h
#pragma once
#include <string>
#include <iostream>
#include "LongLong.h"
using namespace std;
class FractionPrivate: private LongLong
{
private:
	double d;
public:

	void set_d(double d) { this->d = d; };
	double get_d() const { return d; };

	FractionPrivate();
	FractionPrivate(double d, LongLong c) :d(d), LongLong(c) {};
	FractionPrivate(const FractionPrivate& s) : d(s.d), LongLong(s) {};

	FractionPrivate& operator =(const FractionPrivate& s);
	operator string() const;

	FractionPrivate& operator ++();
	FractionPrivate& operator --();
	FractionPrivate operator ++(int);
	FractionPrivate operator --(int);

	friend ostream& operator <<(ostream&, const FractionPrivate& s);
	friend istream& operator >>(istream&, FractionPrivate& s);

	friend bool operator > (const FractionPrivate& c1, const FractionPrivate& c2);
	friend bool operator < (const FractionPrivate& c1, const FractionPrivate& c2);
	friend bool operator == (const FractionPrivate& c1, const FractionPrivate& c2);
	friend bool operator != (const FractionPrivate& c1, const FractionPrivate& c2);
	friend bool operator >= (const FractionPrivate& c1, const FractionPrivate& c2);
	friend bool operator <= (const FractionPrivate& c1, const FractionPrivate& c2);

};

