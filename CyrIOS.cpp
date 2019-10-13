#define CYR_IOS_IMPLEMENTATION // 4
#include "CyrIOS.h"

// Класс CyrOstream
CyrOstream& CyrOstream:: operator << (const char* s) 
{
	int n = strlen(s);
	strncpy(buf_,s,n);
	buf_[n] = 0;
	CharToOem(buf_, buf_);
	cout << buf_;
	return *this;
}

CyrOstream& CyrOstream::operator<<(_Myios& (_cdecl* _f)(_Myios&))
{
	cout << _f;
	return *this;
}

// Глобальный объект для вывода
CyrOstream Cout(_Noinit);
