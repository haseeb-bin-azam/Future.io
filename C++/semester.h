#ifndef SEMESTER_H // header guards
#define SEMESTER_H // header guards

#include<string>

class semester // defining class
{
    private: // access modifer
        // data members
          int semesterNo;
          std::string courseName[8];
          std::string courseCode[8];

    public:      
        // members functions 

          // constructor(default)
            semester();
          // constructor(paramitarized)
            semester(int,std::string*,std::string*);
          // destructor
            ~semester();

          // declraing accessor
            int getSemesterNo();
            std::string getCourseName(int);
            std::string getCourseCode(int);

          void showSemester();
};
#endif 
