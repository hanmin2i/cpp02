#include "company.h"

Company::Company(string name, string telephone) : name(name), telephone(telephone)
{
	cout << "composition" << endl;
}

void Company::print() const
{
	cout << "ȸ�� �� : " << name << endl;
	cout << "ȸ�� ��ȣ : " << telephone << endl;
	cout << "composition" << endl;
}
