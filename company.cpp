#include  <cmath>

#include "company.h"

void company::jobbralep()
{

	x = x +1;
}


double company::profit(const double& quantity, const int& consumer_x, const int& consumer_y)
	{
	return company::revenue(quantity,consumer_x,consumer_y) - company::cost(quantity,consumer_x,consumer_y);
	}

double company::revenue(const double& quantity, const int& consumer_x, const int& consumer_y)

	{
	return price*quantity;
	}

double company::cost(const double& quantity, const int& consumer_x, const int& consumer_y)
	{
	return company::variable_cost(quantity) + company::transport_cost(quantity,consumer_x,consumer_y) + company::fix_cost();
	}


double company::variable_cost(const double& quantity)
	{
	return 3*quantity;
	}

double company::transport_cost(const double& quantity, const int& consumer_x, const int& consumer_y)
	{
	return  sqrt( (double) pow( x - consumer_x,2) + pow(  y - consumer_y,2));
	}

double company::fix_cost()
	{
	return 20;
	}


int company::relocate(int *company_x,int *company_y ,const int& other_shop_x, const int& other_shop_y)
	{
	return 0;
	}

