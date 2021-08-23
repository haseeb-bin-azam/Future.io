#include"semester.h"
#include<iostream>
semester :: semester() // defining default constructor
{
    int i=0;

    // conditional operator
    semesterNo==1 ? i=7 : semesterNo==2 ? i=8 : semesterNo==3 ? i=8 : semesterNo==4 ? i=7 : semesterNo==5 ? i=6 : semesterNo==6 ? i=6 : semesterNo==7 ? i=7 : i=5;

    semesterNo = 0;
    for ( int j=0; j<i; ++j )  
    {
        courseName[j] = "";
    }

    for ( int j=0; j<i; ++j )
    {
        courseCode[j] = "";
    }
}

semester :: semester( int semesterNo, std :: string *courseName, std :: string *courseCode ) // defining paramitarized constructor
{
    int i=0;
    // conditonal operator
      semesterNo==1 ? i=7 : semesterNo==2 ? i=8 : semesterNo==3 ? i=8 : semesterNo==4 ? i=7 : semesterNo==5 ? i=6 : semesterNo==6 ? i=6 : semesterNo==7 ? i=7 : i=5;

    this->semesterNo = semesterNo;

    for ( int j=0; j<i; ++j )
    {
        this->courseName[j] = courseName[j];
    }

    for ( int j=0; j<i; ++j )
    {
        this->courseCode[j] = courseCode[j];
    }
}

void semester :: showSemester()
{
    int i=0;
    semesterNo==1 ? i=7 : semesterNo==2 ? i=8 : semesterNo==3 ? i=8 : semesterNo==4 ? i=7 : semesterNo==5 ? i=6 : semesterNo==6 ? i=6 : semesterNo==7 ? i=7 : i=5;
    std :: cout << "your semester no is : " << semesterNo << std :: endl;
    std :: cout << "courses are : ";
    for ( int j=0; j<i; ++j )
    {
        std :: cout << courseName[j] << " ";
    }

    std :: cout << std :: endl;

    std :: cout << "coursecodes are : ";
    for ( int j=0; j<i; ++j )
    {
        std :: cout << courseCode[j] << " ";
    }
    
    std :: cout << std :: endl;
}

semester :: ~semester() // defining destructor
{ }

int semester :: getSemesterNo() // defining accessor
{
    return semesterNo;
}
          
std :: string semester :: getCourseName( int index ) // defining accessor
{
    return courseName [index];
}

std :: string semester :: getCourseCode( int index ) // defining accessor
{   
    return courseCode[index];
}
