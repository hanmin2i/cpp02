
#include "date.h"

// �Ű������� �ִ� ������                                                                                                                                           
Date::Date(int year, int month, int day)
    : month(month), day(day), year(year)
{
    if ((month < 1) || (month > 12))
    {
        cout << "���� ������ ������ϴ� ";
        assert(false);
    }                       // ���� 1���� ���� 
    int daysInMonths[13] = { 0, 31, 28, 31, 30, 31, 30, 31,
                             31, 30, 31, 30 ,31 };
    if ((day < 1) || (day > daysInMonths[month]))
    {
        cout << "�ش� ���� ��¥�� ������ϴ�! ";
        assert(false);
    }
    if ((year < 1900) || (year > 2099))
    {
        cout << "������ ������ ������ϴ�! ";
        assert(false);
    }
    cout << "use-a " << endl;
}
// �Ҹ���                                                  
Date::~Date()
{
}
// print ��� �Լ�                                                    
void Date::print() const
{
    cout << year << "��" << month << "��" << day << "��" << endl;
    cout << "use-a " << endl;
}