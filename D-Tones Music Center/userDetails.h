#pragma once
#include "customer.h"
class userDetails:public customer
{
protected:
  customer *cus;
    
public:
  userDetails(customer *pcus);
  void Displaydetails();

};