#include"department.h"
#include"faculty.h"
#include<iostream>

department :: department() //constructor(default) definition
{
    name = "Computer Science";
}

//constructor(paramitarized) definition
department :: department( std :: string name, semester *semesterPointer, faculty *facultyPointer )
{
    this -> name = name;
    this -> semesterPointer = semesterPointer;
    this -> facultyPointer = facultyPointer;
}

// functor's definition
department department :: operator ()( std :: string name )
{
    this -> name = name;
    return *this;
}

department :: ~department() //destructor definition
{ }

void department :: showDepartment() const // member function definiton
{
    std :: cout << "department name is : " << name << std :: endl << std :: endl;
}

