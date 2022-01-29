#pragma once
#include "order.h"
#include "regCustomer.h"
class payment
{
 private:
  char bank[15];
  int CardNo;
  int CVC;
  char name[15];
  int instrumentID,registerId,registerDate;
  float price,discount;
  int NewPrice;
  order *o;


public:
payment();
payment(const char pbank[],int cNO,int pCVC,const char pName[],int inst,float pPrice,order *po);
  void display();
  void addpayment();
  void validationDisplay();
  int getId();
  float getprice();
  void createDiscount(int q, regCustomer *rg);
  void canclePayment();
~payment();
};