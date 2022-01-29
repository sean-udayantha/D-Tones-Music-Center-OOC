#include <iostream>
#include"userDetails.h"
#include"customer.h"
#include <cstring>
using namespace std;

userDetails::userDetails(customer *pcus){
  cus = pcus;
}
void userDetails::Displaydetails(){
    cus->CusDetails();
}