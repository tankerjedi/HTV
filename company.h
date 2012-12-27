//Company class

class company
{
	public:
		int x,y,variety,price;

		void jobbralep();
		double profit(const double& quantity, const int& consumer_x, const int& consumer_y);
		
		int relocate(int *company_x,int *company_y ,const int& other_shop_x, const int& other_shop_y);

		
	private:

		double revenue(const double& quantity, const int& consumer_x, const int& consumer_y);
		double cost(const double& quantity, const int& consumer_x, const int& consumer_y);
		double variable_cost(const double& quantity);
		double transport_cost(const double& quantity, const int& consumer_x, const int& consumer_y);
		double fix_cost();

};
