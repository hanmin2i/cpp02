/**************************************************************
 * Product Ŭ������ ���� ����                                 *
 **************************************************************/
#include "product.h"

 // ������
Product::Product(string name, double unitPrice)
	: name(name), unitPrice(unitPrice)
{
}
// �Ҹ���
Product::~Product()
{
}
// getPrice ��� �Լ�
double Product::getPrice() const
{
	return unitPrice;
}