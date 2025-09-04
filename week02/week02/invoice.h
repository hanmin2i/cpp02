/**************************************************************
 * Invoice Ŭ������ �������̽� ����                           *
 **************************************************************/
#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"
#include "company.h"
#include "date.h"
#include "name.h"
#include "paper.h"

class Invoice : public Paper
{
    // Product�� ��� �ʵ�� ������ ���� ����
private:
    int invoiceNumber;
    double invoiceTotal;
    Company company;
    Name name1; // has-a����� ��������� �������
    /* Date date;*/ //use-a�� ������� �ʿ�X
public:

    //Invoice(int invoiceNumber);// aggregation X
    //Invoice(int invoiceNumber, Company company);// aggregation O
    Invoice(int invoiceNumber, string name, string telephone, Name name1); // composition
    ~Invoice();
    void add(int quantity, Product product); // use-a
    /*void print() const; */
    void print(Date date) const; //use-a�� �ŰԺ����� ���
    /*void print(Company company);*/
};
#endif