/**************************************************************
 * Invoice Ŭ������ ����ϴ� ���ø����̼� ����                *
 **************************************************************/
#include "invoice.h"
#include "company.h"
#include "date.h"
#include "name.h"
#include "paper.h"

int main()
{
	/*Company company1();*/
  // Product ��ü �ν��Ͻ�ȭ
	Date date1(2025, 06, 05);//use-a �ܺο��� ���� �Լ��� ���ڸ� ����
	Name name1("��", "�ѹ�");//has-a
	Product product1("Table", 150.00);
	Product product2("Chair", 80.00);
	Invoice invoice1(1001, "���ɾ�", "123-456", name1); // �������� ���� invoice��ü �ȿ��� ����� composition
	// ��ü�� ȣ���ؼ� ���� �ҷ����� aggregation
// Invoice ��ü�� �ν��Ͻ�ȭ�ϰ� Product ��ü�� ����� ���
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