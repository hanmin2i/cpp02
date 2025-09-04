
#include "date.h"
  
// 매개변수가 있는 생성자                                                                                                                                           
Date::Date(int year, int month, int day)
: month(month), day(day), year(year)
{
  if((month < 1) ||(month > 12))
  {
    cout << "달의 범위를 벗어났습니다 ";
    assert(false);
  }                       // 월은 1부터 시작 
  int daysInMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 
                           31, 30, 31, 30 ,31};
  if((day < 1) ||(day > daysInMonths [month]))
  {
    cout << "해당 월의 날짜를 벗어났습니다! ";
    assert(false);
  }
  if((year < 1900) ||(year > 2099))
  {
    cout << "연도의 범위를 벗어났습니다! " ;
    assert(false);
  }
  cout << "use-a " << endl;
}
// 소멸자                                                  
Date::~Date()
{
}
// print 멤버 함수                                                    
void Date::print() const 
{
  cout << year << "년" << month <<  "월" << day << "일" << endl;
  cout << "use-a " << endl;
}