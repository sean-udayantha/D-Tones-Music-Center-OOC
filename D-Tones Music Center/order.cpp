#include<iostream>
#include "payment.h"
#include "order.h"
using namespace std;

order::order()
{
  
}
order::order(int oNumber,int q,instrument *i/*,payment *p*/)
{
     orderNumber=oNumber;
     quantity=q;
     inst=i;
          
}

void order::placeOrder()
{ 

}

void order::displayOdetails()
{
    cout<<"order number is :"<<orderNumber<<endl;
    cout<<"quantity :"<<quantity<<endl;
    inst->displayDetails();  

}
void order::confirmOrder()
{
 cout<<"Order confirmed "<<endl;
}
order::~order()
{
    cout<<"calling destructor"<<endl;

}