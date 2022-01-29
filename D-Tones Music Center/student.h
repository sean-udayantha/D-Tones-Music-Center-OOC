#pragma once
#include "regCustomer.h"
class student : public regCustomer
{
protected:
    char Name[15];
    char NIC[15];
    int PhoneNumber;
    char instrument[10];
    char stUsername[15];
    char stPassword[15];


public:
    student();
    student(const char name[]);
    void display();
    void schoolRegister(const char sN[], const char sNIC[], int sPN, const char inst[], const char un[], const char pw[]);
	  void studentLogin(const char stUsernameAttempt[], const char stPasswordAttempt[]);
    void studentDetails();
    char* getName();
    ~student();
};