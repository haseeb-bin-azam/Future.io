#ifndef FACULTY_H // header guards
#define FACULTY_H // header guards

#include<string> 

class faculty // defining class
{
    private: // access modifier
        // data members
          int semesterNo; 
          std::string teacherName[10];
    
    public:
        // members functions
          // declaring default constructor
            faculty(); 
          // declaring constructor(paramitarized)
            faculty(int,std::string*);
          // declaring destructor
            ~faculty();

          // declraing accessor
            int getSemesterNo();
            std::string getTeacherName(int);  
            
          void showFaculty();
};
#endif
