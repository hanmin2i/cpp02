/**************************************************************
 * Invoice 클래스를 사용하는 애플리케이션 파일                *
 **************************************************************/
#include "invoice.h"
#include "company.h"
#include "date.h"
#include "name.h"
#include "paper.h"

int main()
{
	/*Company company1();*/
  // Product 객체 인스턴스화
  Date date1(2025,06,05);//use-a 외부에서 만들어서 함수에 인자를 포함
  Name name1("이","한민");//has-a
  Product product1("Table", 150.00);
  Product product2("Chair", 80.00);
  Invoice invoice1(1001, "이케아", "123-456",name1); // 직접적인 값을 invoice객체 안에서 만들면 composition
													 // 객체를 호출해서 값을 불러오면 aggregation
  // Invoice 객체를 인스턴스화하고 Product 객체를 사용해 출력
  //Invoice invoice(1001); //aggregation X
  //Invoice invoice(1001, company1); //aggregation O
  invoice1.add(1, product1); //use-a
  invoice1.add(6, product2); //use-a
  //invoice.print(company1); //use-a
  //invoice.print();//aggreagation
  invoice1.print(date1);
  

  /*invoice1.print();*/
  return 0;
  //use-a 
}