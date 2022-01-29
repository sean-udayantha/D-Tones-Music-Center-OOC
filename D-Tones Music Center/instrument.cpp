#include<cstring>
#include<iostream>
#include"instrument.h"
using namespace std;

instrument::instrument()
{
    cout<<"defualt constructer"<<endl;
}
instrument::instrument(int instId, const char iName[],float pprice)
{
    instrumentId=instId;
    strcpy(instName,iName);
    price=pprice;
}
void instrument::displayDetails()
{
    cout<<"instrument ID is: "<<instrumentId<<endl;
     cout<<"instrument name is: "<<instName<<endl;
      cout<<"price of instrument is RS: "<<price<<endl;
}
instrument::~instrument()
{
    cout<<"calling destructor"<<endl;

}