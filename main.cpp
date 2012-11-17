#include <stdio.h>
using namespace std;

//Company class
#include "company.h"

int main(int argc, char * argv[])
{

	printf("Alpha verzió\n Hotelling szimulációs program \n");

	company vallalat;
	vallalat.x = 10;
	vallalat.y = 20;
	printf("A vállalat elhelyezkedése: (%d,%d)\n",vallalat.x,vallalat.y);
	
	vallalat.jobbralep();
	printf("A vállalat elhelyezkedése: (%d,%d)\n",vallalat.x,vallalat.y);

	return 0;
}

