/**************************************************************
 * Invoice Ŭ������ ���� ����                                 *
 **************************************************************/
#include "invoice.h"

 // ������  ��׸����̼��� ��ü ��ü�� ����
 //Invoice::Invoice(int invoiceNumber,Company company)//aggregation
								//���������� �׳� ���ڿ��� �޾ƿ� invoice���ʿ��� ����
Invoice::Invoice(int invoiceNumber, string name, string telephone, Name name1)
	: invoiceNumber(invoiceNumber), invoiceTotal(0.0), company(name, telephone), name1(name1)//invoice�� ���Ե� company ��ü
{                                                        //�ŰԺ����� �ʱ�ȭ ����Ʈ�� �ʱ�ȭ
	cout << "�̤ӼҤ��̤�" << endl;
}
// �Ҹ���
Invoice::~Invoice()
{
}
// add ��� �Լ�
void Invoice::add(int quantity, Product product)
{
	invoiceTotal += quantity * product.getPrice();
	cout << "���δ�Ʈ:" << endl;
}
// print ��� �Լ�
//void Invoice::print(Company company) 
void Invoice::print(Date date) const
{
	Paper::print1();

	date.print();//use-a

	name1.print();//aggregation

	company.print();//composition

	/*company.print();*/
	cout << "û�� ��ȣ: " << invoiceNumber << endl;
	cout << "û�� �ݾ�: " << invoiceTotal << endl;
}