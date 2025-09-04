/**************************************************************
 * Invoice 클래스의 인터페이스 파일                           *
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
    // Product를 멤버 필드로 가지고 있지 않음
private:
    int invoiceNumber;
    double invoiceTotal;
    Company company;
    Name name1; // has-a관계라 멤버변수를 만들어줌
    /* Date date;*/ //use-a는 멤버변수 필요X
public:

    //Invoice(int invoiceNumber);// aggregation X
    //Invoice(int invoiceNumber, Company company);// aggregation O
    Invoice(int invoiceNumber, string name, string telephone, Name name1); // composition
    ~Invoice();
    void add(int quantity, Product product); // use-a
    /*void print() const; */
    void print(Date date) const; //use-a라 매게변수로 사용
    /*void print(Company company);*/
};
#endif