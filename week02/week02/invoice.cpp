/**************************************************************
 * Invoice 클래스의 구현 파일                                 *
 **************************************************************/
#include "invoice.h"

// 생성자  어그리게이션은 객체 자체를 받음
//Invoice::Invoice(int invoiceNumber,Company company)//aggregation
                               //컴포지션은 그냥 문자열을 받아옴 invoice안쪽에서 생성
Invoice::Invoice(int invoiceNumber, string name, string telephone, Name name1)
:  invoiceNumber(invoiceNumber), invoiceTotal(0.0) , company(name,telephone), name1(name1)//invoice의 포함된 company 객체
{                                                        //매게변수는 초기화 리스트로 초기화
	cout << "미ㅣ소ㅑㅜㅎ" << endl;
}
// 소멸자
Invoice::~Invoice() 
{
}
// add 멤버 함수
void Invoice::add(int quantity, Product product)
{
  invoiceTotal += quantity * product.getPrice();
  cout << "포로덕트:"<<endl;
}
// print 멤버 함수
//void Invoice::print(Company company) 
void Invoice::print(Date date) const
{           
	Paper::print1();

	date.print();//use-a
	
	name1.print();//aggregation
	
	company.print();//composition
	
	/*company.print();*/
   cout << "청구 번호: " << invoiceNumber << endl;
   cout << "청구 금액: " << invoiceTotal << endl;
}