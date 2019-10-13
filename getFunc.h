#pragma once
#include "Price.h"


double getDouble(istream& in)
{
	double result = 0;
	while (true)
	{
		in >> result;
		if (in.peek() == '\n')
		{
			in.get();
			break;
		}
		else
		{
			cout << "Ожидалось вещественное число. Повторите ввод: "; 
			in.clear();
			while (in.get() != '\n') {}
			
		}
	}
	return result;
}