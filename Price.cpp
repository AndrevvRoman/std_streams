
#include "Price.h"
#include "getFunc.h"


istream& operator>>(istream& in, Price& price)
{
	cout << "¬ведите название товара: ";
	getline(in,price.name);
	cout << "¬ведите название магазина: ";
	getline(in, price.storeName);
	cout << "¬ведите цену: ";
	price.price = getDouble(in);
	return in;
}

ostream& operator<<(ostream& out, Price& price)
{ 
	const int n = 10;
	cout << "|" << std::setw(n+10) << price.name << "|" << std::setw(n+20) << price.storeName << "|" << std::setw(n) << price.price << "|" << endl;
	out.clear();
	return out;
}


