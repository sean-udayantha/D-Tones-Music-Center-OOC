#include<iostream>
#include "schoolOfMusic.h"
#include "student.h"
#include<cstring>
using namespace std;

school::school()
{
    students[0] = new student("name1");
    students[1] = new student("name2");
}

school::school(const char name01[], const char name02[])
{
    students[0] = new student(name01);
    students[1] = new student(name02);
}

void school::DisplayStudents()
{
    for (int i = 0; i < 2; i++)
        students[i]->display();
}

school::~school()
{
    cout << "D-Tones school of Music is shutting down" << endl;
    for (int i = 0; i < 2; i++) {
        delete students[i];
    }
    cout << "All students have been removed" << endl;
}