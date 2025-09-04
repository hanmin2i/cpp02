#include "company.h"

Company::Company(string name, string telephone) : name(name), telephone(telephone)
{
	cout << "composition" << endl;
}

void Company::print() const
{
	cout << "회사 명 : " << name << endl;
	cout << "회사 번호 : " << telephone << endl;
	cout << "composition" << endl;
}
