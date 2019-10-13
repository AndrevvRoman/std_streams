
#include "Price.h"
#include "getFunc.h"


istream& operator>>(istream& in, Price& price)
{
	cout << "������� �������� ������: ";
	getline(in,price.name);
	cout << "������� �������� ��������: ";
	getline(in, price.storeName);
	cout << "������� ����: ";
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


