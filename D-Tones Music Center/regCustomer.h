#pragma once
//#include "order.h"
//#include"instrument.h"
//#include "payment.h"
#include "customer.h"
class regCustomer : public customer
{
protected:
   int registerID;   

public:
regCustomer();
regCustomer(int reid);
void login(const char usernameAttempt[],const char passwordAttempt[],char* Username, char* Password);
 int getReID();
 int getreDate();
};