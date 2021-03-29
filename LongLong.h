#pragma once
#include "Object.h"
#include <iostream>
#include <sstream>

#pragma pack(1)

using namespace std;
class LongLong : public Object
{
	long long1, long2;
public:
	long Getlong1() const;
	long Getlong2() const;

	void Setlong1(long value);
	void Setlong2(long value);

	LongLong();
	LongLong(long, long);
	LongLong(LongLong&);

	LongLong& operator = (const LongLong&);
	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;

	LongLong& operator ++ ();
	LongLong& operator -- ();
	LongLong operator ++ (int);
	LongLong operator -- (int);

	friend bool operator > (const LongLong A, const LongLong B);
	friend bool operator < (const LongLong A, const LongLong B);
	friend bool operator == (const LongLong A, const LongLong B);
};


