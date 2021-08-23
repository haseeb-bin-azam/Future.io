#ifndef DEPARTMENT_H // header guards
#define DEPARTMENT_H // header guards

#include"semester.h"

#include"faculty.h"
#include<string.h>

class department // class definition
{

    private: // access modifier
        // data members
        
          std::string    name = "computer science";
          semester      *semesterPointer; // HAS-A relation
          faculty       *facultyPointer;// HAS-A relation

    public: // access modifier

        //constructor(default) declaration
            department();

        //constructor(paramitarized) declaration
            department(std::string,semester*,faculty*);

        //destructor declaration
            ~department();

        // functor's declaration
            department operator ()(std::string);

        // member function declaration
            void showDepartment() const;

};
#endif

