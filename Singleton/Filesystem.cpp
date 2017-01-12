#include "Filesystem.h"

#include "Filesystem_PS3.h" 
#include "Filesystem_PS4.h"

Filesystem * Filesystem::Instance()
{
	#define PLAYSTATION4

	#ifdef PLAYSTATION3
		static Filesystem* _instance = (Filesystem*)new Filesystem_PS3();
	#else
		#ifdef PLAYSTATION4
			static Filesystem* _instance = (Filesystem*)new Filesystem_PS4();
		#else
			printf("Unexpected error\nNo System\nClosing the application..");
			getchar();
			exit(0);
			static Filesystem* _instance = nullptr;
		#endif
	#endif

	return _instance;

}

Filesystem::Filesystem()
{
}


Filesystem::~Filesystem()
{
}
