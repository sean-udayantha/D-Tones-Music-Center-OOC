#pragma once
//#include "payment.h"
#include "instrument.h"


class order
{
private:
    instrument *inst;
    int orderNumber;
    int quantity;

public:
    order();
    order(int oNumber,int q,instrument *i);
    void displayOdetails();
    void placeOrder();
    void cancleOrder();
    void reOrder();
    void confirmOrder();
    ~order();
};