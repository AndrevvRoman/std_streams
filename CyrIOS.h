#ifndef CYR_IOS_H
#define CYR_IOS_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

#define MAX_STR_LEN 4096

class CyrOstream : public ostream
{
public:
	CyrOstream(_Uninitialized nojnit) : ostream(_Noinit) {}

	CyrOstream& operator <<(const char* s);

	CyrOstream& operator <<	(_Myios& (_cdecl* _f)(_Myios&));

	CyrOstream& operator <<  (int n) { cout << n; return *this; }
	CyrOstream& operator << (double f) { cout << f; return *this; }
private:
	char buf_[MAX_STR_LEN];
	
};
extern CyrOstream Cout;
#endif /* CYR_IOS_H */
#define CYR_IOS_IMPLEMENTATION // 1
#define cout Cout // 2
