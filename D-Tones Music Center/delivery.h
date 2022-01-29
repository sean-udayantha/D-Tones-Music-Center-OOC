#pragma once
#include"payment.h"
class delivery
{
  private:
    char name[15];
    char address[40];
    int postalCode;
    int PhoneNumber;
    int deliveryCode;
    int totalPrice;
    int instrumentID;


  public:
    delivery();
    delivery(const char pname[],const char paddress[],int pCode,int Pnumber,int deCode);   
    void DisplayDeliveryDetails();
    void createDelivery(int qut,int qn, payment *p);
    void cancleDelivery();
};
