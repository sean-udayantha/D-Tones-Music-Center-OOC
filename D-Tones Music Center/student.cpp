#include "student.h"
#include<iostream>
#include<cstring>
using namespace std;


student::student()
{
}

student::student(const char name[])
{
	strcpy(Name, name);
}

void student::display()
{
	cout << "student " << Name << endl;
}

void student::schoolRegister(const char sN[], const char sNIC[], int sPN, const char inst[], const char un[], const char pw[])
{
	strcpy(Name, sN);
	strcpy(NIC, sNIC);
	PhoneNumber = sPN;
	strcpy(instrument, inst);
	strcpy(stUsername, un);
	strcpy(stPassword, pw);
}

void student::studentLogin(const char stUsernameAttempt[], const char stPasswordAttempt[])
{

	if (strcmp(stUsername, stUsernameAttempt) == 0 && strcmp(stPassword,stPasswordAttempt) == 0) {
		cout << Name << " has been succefully loged in as a student" << endl << endl;
	}
	else
	{
		cout << "Login failed" << endl << endl;
	}
}
void student::studentDetails()
{
	cout << "*==== Details of " << Name << " ====*" << endl;
	cout << "Student Name :" << Name << endl;
	cout << "NIC Number:" << NIC << endl;
	cout << "Instrument:" << instrument << endl;
	cout << "Mobile Number:" << PhoneNumber << endl<<endl;
}

char* student::getName()
{
	return Name;
}

student::~student()
{
	cout << "Deleting student " << Name << endl;
}