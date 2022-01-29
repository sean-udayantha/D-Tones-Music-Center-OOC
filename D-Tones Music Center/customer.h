#pragma once
#include "order.h"
#include"instrument.h"


class customer 
{
protected:
    char Name[15]; 
    char NIC[15];
    char address[50];
    int PhoneNumber;
    char username[15];
	char password[15];
    order *odr;
    

public:
customer();
customer(const char cN[],const char cNIC[],const char ad[], int cPN, const char un[], const char pw[]);
 void Reg(order *o);
 void printdetails();
 void CusDetails();
 char* getUsername();
 char* getPassword();
};