#include <stdio.h>
using namespace std;

//Company class
//#include "company.h"
#include "region.h"

int main(int argc, char * argv[])
{

	region budapest;	

	printf("Alpha verzió\n Hotelling szimulációs program \n");

	//company vallalat;
	budapest.a.x = 10;
	budapest.a.y = 20;
	budapest.a.price = 2;
	budapest.b.x = 400;
	budapest.b.y = 20;
	budapest.b.price = 3;
	printf("A vállalat elhelyezkedése: (%d,%d)\n",budapest.a.x,budapest.a.y);
	
	budapest.a.jobbralep();
	printf("A vállalat elhelyezkedése a lépés után: (%d,%d)\n",budapest.a.x,budapest.a.y);

	budapest.a.relocate(&budapest.a.x,&budapest.a.y,budapest.b.x,budapest.b.y);	
	printf("A vállalat elhelyezkedése újrahelyezkedés után: (%d,%d)\n",budapest.a.x,budapest.a.y);

	printf("%d\n",budapest.ter.points[3][0][0]);
	printf("Profit %f\n",budapest.a.profit(10,95,20));

	return 0;
}

