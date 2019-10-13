#include "Price.h"
#include "StoreDB.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vector>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream in("stores.txt");
	std::vector<Price> tempV;
	Price temp;
	
	for (int i = 0; i < 8; i++)
	{
		in >> temp.name;
		in >> temp.storeName;
		in >> temp.price;
		tempV.push_back(temp);
	}

	StoreDB db(tempV);
	db.show();

	string str;
	cin >> str;

	db.showStash(str);

	system("pause");
}