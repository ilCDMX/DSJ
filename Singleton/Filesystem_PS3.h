#pragma once
#include "Filesystem.h"

#include <iostream>
using namespace std;

class Filesystem_PS3:public Filesystem
{
public:
	void addValue(int v)
	{
		value += v;
		printf("\nADD : %i", v);
	};
	void restValue(int v)
	{
		value -= v;
		printf("\nSUBSTRACT : %i", v);
	};
	void print(char let)
	{
		printf("\nValue of %c: %i\n", let, value);
	};

	int getValue()
	{
		return value;
	};

	void getSystem() {
		printf("WELCOME TO Play Station 3\n");
		value = 3;
	};
	Filesystem_PS3();
	~Filesystem_PS3();
};

