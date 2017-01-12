#pragma once

#include <iostream>
using namespace std;

class Filesystem
{
public:
	static Filesystem* Instance();
	
	virtual void addValue(int v) = 0;
	virtual void restValue(int v) = 0;
	virtual void print(char let) = 0;
	virtual int getValue() = 0;
	virtual void getSystem() = 0;

protected:
	int value = 0;
	Filesystem();
	~Filesystem();
};

