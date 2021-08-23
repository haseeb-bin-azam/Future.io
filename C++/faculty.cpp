#include"faculty.h"
#include<iostream>

faculty :: faculty() //defining defaulty constructor
{
    semesterNo = 0;
    for ( int i=0; i<10; ++i )
    {
        teacherName[i] = " ";
    }  
}

faculty :: faculty( int semesterNo, std :: string *teacherName ) // defining paramitarized constructor
{
    int i=0;
    // conditional operator
    semesterNo==1 ? i=9 : semesterNo==2 ? i=8 : semesterNo==3 ? i=8 : semesterNo==4 ? i=7 : semesterNo==5 ? i=7 : semesterNo==6 ? i=6 : semesterNo==7 ? i=7 : i=5;

    for ( int j=0; j<i; ++j )
    {
        this->teacherName[j] = teacherName[j];
    }

//    std :: cout << std :: endl;
}

void faculty :: showFaculty()
{
    int i=0;
    semesterNo==1 ? i=7 : semesterNo==2 ? i=8 : semesterNo==3 ? i=8 : semesterNo==4 ? i=7 : semesterNo==5 ? i=6 : semesterNo==6 ? i=6 : semesterNo==7 ? i=7 : i=5;
    std :: cout << "teachers are : ";
    for ( int j=0; j<i; ++j )
    {
        std :: cout << teacherName[j] << " ";
    }

//    std :: cout << std :: endl;
}

faculty :: ~faculty() // defining destructor
{ }

int faculty :: getSemesterNo() // defining accessor
{
    return semesterNo;
}

std :: string faculty :: getTeacherName( int index )
{
    return teacherName[index];
}
