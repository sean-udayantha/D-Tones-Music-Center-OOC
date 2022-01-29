
#include "customer.h"
#include "order.h"
#include"instrument.h"


#include <iostream>
#include <cstring> 
using namespace std;

customer::customer(){
}

customer::customer(const char cN[], const char cNIC[], const char ad[], int cPN,const char un[], const char pw[])
{
    
    strcpy(Name,cN); 
    strcpy(NIC,cNIC);
    strcpy(address,ad);
    PhoneNumber=cPN;
    strcpy(username , un);
	strcpy(password, pw);
}

void customer::Reg(order *o)
{
   odr=o;
}

void customer::printdetails()
{
cout<<"*==== Hi "<<Name<<" Welcome to D-tones Music  Center ====*"<<endl;
    cout << "Customer Name :"<<Name<<endl;
    cout << "NIC Number:"<<NIC<<endl;
    cout << "Addres:"<<address<<endl;
    cout << "Mobile Number:"<<PhoneNumber<<endl;
    odr-> displayOdetails();
}
void customer::CusDetails(){
cout<<"*===="<<Name<<" 's details ====*"<<endl;
    cout << "Customer Name :"<<Name<<endl;
    cout << "NIC Number:"<<NIC<<endl;
    cout << "Addres:"<<address<<endl;
    cout << "Mobile Number:"<<PhoneNumber<<endl<<endl;
}

char* customer::getUsername(){
	return username;
}

char* customer::getPassword(){
	return password;
}
