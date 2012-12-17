#include  <cmath>

#include "company.h"

void company::jobbralep()
{

	x = x +1;
}


double company::revenue(const double& quantity, const int& consumer_x, const int& consumer_y)

	{
	return price*quantity;
	}

double company::cost(const double& quantity, const int& consumer_x, const int& consumer_y)
	{
	return 0;
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



