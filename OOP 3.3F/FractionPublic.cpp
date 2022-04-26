//FractionPublic.cpp
#include <iostream> 
#include <cmath> 
#include <stdlib.h> 
#include <string> 
#include <sstream> 
#include "LongLong.h"
#include "FractionPublic.h"

using namespace std;


FractionPublic::FractionPublic()
	:d(0), LongLong(0, 0)
{
}

FractionPublic& FractionPublic::operator++()
{
	LongLong::operator++();
	return *this;
}

FractionPublic& FractionPublic::operator--()
{
	LongLong::operator--();
	return *this;
}

FractionPublic FractionPublic::operator++(int)
{
	FractionPublic t(*this);
	LongLong::operator++();
	return t;
}

FractionPublic FractionPublic::operator--(int)
{
	FractionPublic t(*this);
	LongLong::operator--();
	return t;
}

bool operator>(const FractionPublic& c1, const FractionPublic& c2)
{
	return ((LongLong)c1 > (LongLong)c2 ||
		(LongLong)c1 == (LongLong)c2 &&
		c1.get_d() > c2.get_d());
}

bool operator<(const FractionPublic& c1, const FractionPublic& c2)
{
	return ((LongLong)c1 < (LongLong)c2 ||
		(LongLong)c1 == (LongLong)c2 &&
		c1.get_d() < c2.get_d());
}

bool operator==(const FractionPublic& c1, const FractionPublic& c2)
{
	return  (LongLong)c1 == (LongLong)c2 &&
		c1.get_d() == c2.get_d();
}

bool operator!=(const FractionPublic& c1, const FractionPublic& c2)
{
	return !(c1 == c2);
}

bool operator>=(const FractionPublic& c1, const FractionPublic& c2)
{
	return !(c1 < c2);
}

bool operator<=(const FractionPublic& c1, const FractionPublic& c2)
{
	return !(c1 > c2);
}
