
#include "StoreDB.h"

StoreDB::StoreDB(vector<Price> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		add(vec[i]);
	}
}

void StoreDB::add()
{
	Price temp;
	cin >> temp;
	db.push_back(temp);
	std::sort(db.begin(), db.end(), [](const Price& left, const Price& right) {
		return left.storeName < right.storeName; });
}

void StoreDB::add(Price pr)
{
	db.push_back(pr);
	std::sort(db.begin(), db.end(), [](const Price& left, const Price& right) {
		return left.storeName < right.storeName; });
}

bool StoreDB::showStash(string storeName)
{
	bool founded = false;
	for (int i = 0; i < db.size(); i++)
	{
		if (db[i].storeName == storeName)
		{
			founded = true;
			cout << db[i];
		}
	}
	if (!founded) cout << "Ничего не нашлось" << endl;
	return founded;
}

void StoreDB::show()
{
	const int n = 10;
	cout << "|" << std::setw(n+10) << "Товар" << "|" << std::setw(n+20) << "Магазин" << "|" << std::setw(n) << "Цена" << "|" << endl;
	for (int i = 0; i < db.size(); i++)
	{
		cout << db[i];
	}
}

bool StoreDB::compByWord(const Price& left, const Price& right)
{
	return left.storeName < right.storeName;
}
