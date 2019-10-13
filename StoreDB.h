#pragma once
#include"Price.h"
#include <vector>
#include <algorithm>

using std::vector;


class StoreDB
{
public:
	StoreDB(){}

	StoreDB(vector<Price> vec);

	void add();

	void add(Price pr);

	bool showStash(string storeName);

	void show();
private:
	bool compByWord(const Price& left, const Price& right);
	vector<Price> db;
};

