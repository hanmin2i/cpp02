/**************************************************************
 * Name Ŭ������ ���� ����                                    *
 **************************************************************/
#include "name.h"

 // ������
Name::Name(string last, string first)
	:last(last), first(first)
{
	cout << "aggregation" << endl;
}
// �Ҹ���
Name::~Name()
{
}
// print ��� �Լ�
void Name::print() const
{
	cout << "���� �̸�: " << last << " " << first << endl;
	cout << "aggregation" << endl;
}