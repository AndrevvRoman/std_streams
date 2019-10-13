#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using std::istream;
using std::string;
using std::ostream;
using std::endl;
using std::cout;
using std::cin;


class Price
{
public:
	string name = "";
	string storeName = "";
	double price = 0;

	Price(string name, string storeName, double price)
	{

		this->name = name;
		this->storeName = storeName;
		this->price = price;
	}

	Price(){}

	~Price() = default;

	friend istream& operator >> (istream& in, Price& price);
	
	friend ostream& operator << (ostream& out, Price& price);
};


