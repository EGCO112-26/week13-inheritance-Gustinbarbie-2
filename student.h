#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

#include "MU_Person.h"

class student : public MU_person {
private:
    double gpa;

public:
    student(long id = 1, double g = 1.0, const std::string& name = "Nattawut");
    ~student();

    void display();
};

student::student(long id, double g, const std::string& n)
    : MU_person(id, n), gpa(g)
{
    std::cout << "MU student constructor  " << gpa << std::endl;
}

student::~student()
{
    std::cout << "-------" << std::endl;
    std::cout << "student destructor  " << gpa << std::endl;
}

void student::display()
{
    std::cout << "GPA: " << gpa << std::endl;
}

#endif