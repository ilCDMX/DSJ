// Singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Filesystem.h"
/*
In order to proof the program, you must go to Filesystem.h -> Instance and change the #define
*/

int main()
{
	Filesystem *w = Filesystem::Instance();
	Filesystem *a = Filesystem::Instance();
	Filesystem *s = Filesystem::Instance();
	Filesystem *d = Filesystem::Instance();
	Filesystem *wasd = Filesystem::Instance();

	bool play = true;

	wasd->getSystem();
	printf("Initial value : %i\n", wasd->getValue());

	while (play)
	{
		w->addValue(6);
		getchar();
		w->print('w');

		a->restValue(3);
		getchar();
		a->print('a');

		s->addValue(2);
		getchar();
		s->print('s');

		d->restValue(4);
		getchar();
		d->print('d');

		if (d->getValue() >= 5)
		{
			printf("\nFinish Program");
			getchar();
			exit(0);
		}
	}
	return 0;
}