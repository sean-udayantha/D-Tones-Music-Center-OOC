#include "regCustomer.h"
#include "order.h"
#include"instrument.h"
#include<iostream>
#include<cstring>
using namespace std;
regCustomer::regCustomer()
{
 cout<<"default constructor"<<endl;
}
void regCustomer::login(const char usernameAttempt[],const char passwordAttempt[], char* Username, char* Password)
{

	if (strcmp(usernameAttempt, Username)== 0 && strcmp(passwordAttempt, Password) == 0)
     {
		cout << "Succefully logged in as a registered customer" <<endl;
	}
	else
	{
		cout << "Login failed"<< endl;
	}
 	
}

regCustomer::regCustomer(int reid)
{
  registerID = reid;
}

int regCustomer::getReID()
{
 if (registerID > 0)
  {
  return registerID;
  }
else 
  {
    return 0;
 }
}
