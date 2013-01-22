//Space class

#include "company.h"
#include "space.h"

//Definition

class region
{
	public:
		company a;
		company b;
		space ter;

		void new_company();

		double total_profit(company& company_i);

};
