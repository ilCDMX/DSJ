#pragma once
#include "Filesystem.h"

#include <iostream>
using namespace std;

class Filesystem_PS4:public Filesystem
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
		printf("WELCOME TO Play Station 4\n");
		value = 4;
	};
	Filesystem_PS4();
	~Filesystem_PS4();
};

