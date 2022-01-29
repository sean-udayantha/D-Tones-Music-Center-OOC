#pragma once
class instrument
{
private:
    int instrumentId;
    char instName[15];
    float price;
    float updatedPrice;

public:
    instrument();
    instrument(int instId, const char iName[],float pprice);
    void displayDetails();
    void addNewItem();
    void generateList();
    void updatePrice();
    ~instrument();
};