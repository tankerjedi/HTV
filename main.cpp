#include <stdio.h>
using namespace std;

//Company class
//#include "company.h"
#include "space.h"

int main(int argc, char * argv[])
{

	space budapest;	

	printf("Alpha verzió\n Hotelling szimulációs program \n");

	company vallalat;
	budapest.a.x = 10;
	budapest.a.y = 20;
	printf("A vállalat elhelyezkedése: (%d,%d)\n",budapest.a.x,budapest.a.y);
	
	budapest.a.jobbralep();
	printf("A vállalat elhelyezkedése: (%d,%d)\n",budapest.a.x,budapest.a.y);


	printf("%d\n",budapest.points[3][0][0]);

	return 0;
}

