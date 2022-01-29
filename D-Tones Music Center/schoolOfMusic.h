#pragma once
#include "student.h"
class school: public student
{
private:
    student *students[100];
        

public:
    school();
    school(const char name01[],const char name02[]);
    void DisplayStudents();
    ~school();
};