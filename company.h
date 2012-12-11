//Company class

class company
{
	public:
		int x,y,variety,price;

		void jobbralep();
		void relocate(const int& company_x, const int& shop_y);

		double profit(const double& quantity, const int& consumer_x, const int& consumer_y);
		
	private:

		double revenue(const double& quantity, const int& consumer_x, const int& consumer_y);
		double cost(const double& quantity, const int& consumer_x, const int& consumer_y);
		double variable_cost(const double& quantity, const int& consumer_x, const int& consumer_y);
		double transport_cost(const double& quantity, const int& consumer_x, const int& consumer_y);
		double fix_cost(const double& quantity, const int& consumer_x, const int& consumer_y);

};
