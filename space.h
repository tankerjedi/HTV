//Space class

#include "company.h"

//Definition

class space
{
	public:
		int points[10][1][1];
		int number_of_inhabitant;
		company a;
		company b;

		space();
		void new_company();

		double total_profit(company& company_i);

};
