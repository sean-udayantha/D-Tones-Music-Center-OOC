#include "payment.h"
#include<iostream>
#include<cstring>
using namespace std;

payment::payment()
{

}
payment::payment(const char pbank[],int cNO,int pCVC,const char pName[],int inst ,float pPrice,order *po)
{
   strcpy(bank,pbank);
   CardNo = cNO;
   CVC = pCVC;
   strcpy(name,pName);
   instrumentID = inst;
   price =pPrice;
   registerId = 0;
   o=po;

}
void payment::display()
{
  cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++"<<endl<<endl;
  cout<<"<<<<<<<<<<<payment details>>>>>>>>>>>"<<endl;
  cout<<"bank name:"<<bank<<endl;
  cout<<"card number:"<<CardNo<<endl;
  cout<<"instument id :"<<instrumentID<<endl<<endl;
  cout<<"your price is:"<<price<<endl;
  cout<<"your discount is:10%"<<endl;
  cout<<"new price is:"<<NewPrice<<endl<<endl<<endl;
  cout<<"=================================================="<<endl;
  cout<<"##register ID:"<<registerId<<endl;

}

void payment::validationDisplay()
{
  o->confirmOrder();
}
void payment::addpayment()
{
   
}

int payment::getId()
{
  return instrumentID;
}
float payment::getprice()
{
return price;
}
void payment::createDiscount(int q, regCustomer *rg)
{
      registerId = q *rg->getReID();

      discount = 10/100.0*price;
      NewPrice = price - discount;    

}
void payment::canclePayment()
{

}
payment::~payment()
{
  cout<<"destructor is called"<<endl;
}    