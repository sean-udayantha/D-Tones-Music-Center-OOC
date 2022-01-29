#include "delivery.h"
#include <iostream>
#include <cstring>
using namespace std;

delivery::delivery()
{
}
delivery::delivery(const char pname[],const char paddress[],int pCode,int Pnumber,int deCode)
{
  strcpy(name,pname);
  strcpy(address,paddress);
  postalCode = pCode;
  PhoneNumber = Pnumber;
  deliveryCode = deCode;
  totalPrice=0;
  instrumentID=0;

}

void delivery::DisplayDeliveryDetails()
{
 
  cout<<"total price is:  "<<totalPrice<<endl;
  cout<<"ID of bought instrument:  "<<instrumentID<<endl;

     cout<<"=================================================="<<endl;
     cout<<"delivery details"<<endl<<endl<<endl;


  cout<<"name of costomer: "<<name<<endl;
  cout<<"address is: "<<address<<endl;
  cout<<"postal code: "<<postalCode<<endl;
   cout<<"delivery code: "<<deliveryCode<<endl;


  


}
void delivery::createDelivery(int qut,int qn,  payment *p)
{
            totalPrice= qut *p->getprice();
            instrumentID= qn *p->getId();

            cout<<"total instrument bought:"<<qut<<endl;


}
void delivery::cancleDelivery()
{

}

