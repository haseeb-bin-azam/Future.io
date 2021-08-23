#include<iostream> 
#include"department.cpp" 
#include"semester.cpp"
#include"faculty.cpp"
#include<string>

int main()
{
    std :: string semester1Courses[] = { "IICT", "IICT lab", "PF", "PF lab", "islamic studies", "english", "calculus" };
    std :: string semester1Codes[] = { "CS-101", "CS-101L", "CS-102", "CS-102L", "HU 102", "HU-104", "MT-101" };
    std :: string semester1teachers[] = { "tehniyat mirza CS1 ",  "maleeha shah CS1", "hammad ahmed CS1", "arifa Mustafa CS1", "usman qureshi CS1", "bushra zaidi CS1", "meraj ahmed CS1","kamran Ali CS1","Maeydah Masroor CS1" };

    std :: string semester2Courses[] = { "OOP", "OOP lab", "DLD", "DLD lab", "comunication skill", "MVC", "BE", "BE lab" };
    std :: string semester2Codes[] = { "CS-103", "CS-103L", "CS-104", "CS-104L", "HU-106", "MT-106", "NS-104", "NS-104L" };
    std :: string semester2teachers[] = { "razia sosan CS2", "manal awan CS2", "rooh ul amin CS2", "sidra rahim CS2", "tatheer yawer CS2", "atif idrees CS2", "usman khalil CS2", "nafees ahmed CS2" };

    std :: string semester3Courses[] = { "DSA", "DSA lab", "COAL", "COAL lab", "data structure", "PSt", "TBW", "linear algebra" };
    std :: string semester3Codes[] = { "CS-201", "CS-201L", "CS-203", "CS-203L", "CS-205", "HU-103", "HU-201", "MT-102" };
    std :: string semester3teachers[] = { "aneela nargis CS3", "faheem ahmed CS3", "farooq shibli CS3", "arham maroof CS3", "khawajah amanullah CS3", "Mustafa Raza CS3", "kamran ali CS3", "iftikhar ahmed CS3" };

    std :: string semester4Courses[] = { "database", "database lab", "OS", "OS lab", "theory of automata", "HU/MG elective I", "probablity & statistics" };
    std :: string semester4Codes[] = { "CS-204", "CS-204L", "CS-206", "CS-206L", "CS-210", "MKT 471", "MT-206" };
    std :: string semester4teachers[] = { "khubaib ahmed CS4", "Fatima Shakeel CS4", "Tawaha ahmed CS4", "Asima bibi CS4", "farooq shibli CS4", "Buhra Mahmood CS4", "sabah qaisar CS4" };

    std :: string semester5Courses[] = { "design & analysis of algorithm", "SE", "data communication and computer networks", "compiler construction", "HU/MG elective II", "differential equations" };
    std :: string semester5Codes[] = { "CS-302", "CS-305", "CS-307", "CS-313", "MKT 471", "MT-203" };
    std :: string semester5teachers[] = { "twaha ahmed CS5", "umema hani CS5", "asif rafiq CS5", "tehniyat mirza CS5", "Buhra Mahmood CS5", "meraj ahmed CS5","Iftekhar Ahmed CS5" };

    std :: string semester6Courses[] = { "AI", "information security", "computer architecture", "CS elective I", "HU/MG elective III", "numerical computing" };
    std :: string semester6Codes[] = { "CS-306", "CS-309", "CS-421(ML)", "CS-340(NS)", "MGM-555", "MT-301" };
    std :: string semester6teachers[] = { "Bilal hayat CS6", "Azmi umer CS6", "khubaib ahmed CS6", "asif rafiq CS6", "sadia mehboob CS6", "ASHAD SHAHID CS6","Ubaid Aftab" };

    std :: string semester7Courses[] = { "human computer interaction", "CS project I", "CS seminar course I", "CS elective II", "CS elective III", "CS elective IV", "HU/MG elective IV" };
    std :: string semester7Codes[] = { "CS-402", "CS-410", "CS-416", "CS-423(CG)", "CS-481(SPM)", "CS-426(MSE)", "MGM-552" };
    std :: string semester7teachers[] = { "conrad dsilva CS7", "razia sosan CS7", "umema hani CS7", "mobeen movania CS7", "ubaid aftab CS7", "noushand tabani CS7", "eram abbasi CS7" };

    std :: string semester8Courses[] = { "professional issues in IT", "CS project II", "CS seminar course II", "CS elective V", "CS elective VI" };
    std :: string semester8Codes[] = { "CS-404", "CS-412", "CS-418", "CS-423(CG)", "CS-426(MSE)" };
    std :: string semester8teachers[] = { "aneela nargis CS8", "zahid hussain CS8", "shama siddiqui CS8", "mobeen movania CS8", "noushand tabani CS8" };

    semester s1( 1, semester1Courses, semester1Codes ); // calling paramitarized constructor of semester class
    faculty f1( 1, semester1teachers ); // calling paramitarized constructor of faculty class
    department d1( "computer science", &s1, &f1 ); // // calling paramitarized constructor of department class

    semester s2( 2, semester2Courses, semester2Codes );
    faculty f2( 2, semester2teachers );
    department d2( "computer science", &s2, &f2 );

    semester s3( 3, semester3Courses, semester3Codes );
    faculty f3( 3, semester3teachers );
    department d3( "computer science", &s3, &f3 );

    semester s4( 4, semester4Courses, semester4Codes );
    faculty f4( 4, semester4teachers );
    department d4( "computer science", &s4, &f4 );

    semester s5( 5, semester5Courses, semester5Codes );
    faculty f5( 5, semester5teachers );
    department d5( "computer science", &s5, &f5 );

    semester s6( 6, semester6Courses, semester6Codes );
    faculty f6( 6, semester6teachers );
    department d6( "computer science", &s6, &f6 );

    semester s7( 7, semester7Courses, semester7Codes );
    faculty f7( 7, semester7teachers );
    department d7( "computer science", &s7, &f7 );

    semester s8( 8, semester8Courses, semester8Codes );
    faculty f8( 8, semester8teachers );
    department d8( "computer science", &s8, &f8 );
        
        std::string array[12][9]={{"    ","8:30-9:20 ","9:30-10:20","10:30-11:20","11:30-12:20","12:30-1:20","1:30-2:20","2:30-3:20","3:30-4:20"},
									{"FF-104", f5.getTeacherName(5), f1.getTeacherName(2) , f1.getTeacherName(2) ,f1.getTeacherName(2),f2.getTeacherName(2),f1.getTeacherName(6)," - " ,f2.getTeacherName(5)},
									{"FF-105" ," - ",f1.getTeacherName(7),f2.getTeacherName(0) , " - " , f5.getTeacherName(2) , " - ", f3.getTeacherName(7) },	
									{"FF-107" , " - " , " - "," - " , f3.getTeacherName(5) , f7.getTeacherName(2) ,f5.getTeacherName(1) , " - " ," - " }  ,
									{"FF-109" , f2.getTeacherName(6) , f4.getTeacherName(0),f5.getTeacherName(1) , f7.getTeacherName(6) , f1.getTeacherName(2) ,f2.getTeacherName(2), f1.getTeacherName(7)," - " },
									{"FF-110" ,f6.getTeacherName(5)," - ",f3.getTeacherName(0) , f2.getTeacherName(2) , f6.getTeacherName(2) , f7.getTeacherName(3) ," - ",f7.getTeacherName(6)},
									{"FF-111", f7.getTeacherName(4),f6.getTeacherName(6),f6.getTeacherName(3),f4.getTeacherName(0),f3.getTeacherName(0),f5.getTeacherName(6),f5.getTeacherName(0),f5.getTeacherName(0)},
									{"FF-148"," - "," - " , f4.getTeacherName(6),f4.getTeacherName(6)," - ",f4.getTeacherName(4),f4.getTeacherName(5),f4.getTeacherName(5)},
									{"FF-150"," - "," - " , f4.getTeacherName(2),f1.getTeacherName(0),f1.getTeacherName(0)," - "," - "," - "},
									{"SF-239",f5.getTeacherName(2)," - ", f3.getTeacherName(2),f3.getTeacherName(6),f3.getTeacherName(2)," - ",f8.getTeacherName(0)," - "},
									{"GF-054",f3.getTeacherName(3),f3.getTeacherName(3) , f4.getTeacherName(6),f4.getTeacherName(6)," - "," - " , f1.getTeacherName(1),f1.getTeacherName(1)},
									{"FF-146" , f8.getTeacherName(4),f7.getTeacherName(5),f1.getTeacherName(8) , f1.getTeacherName(8) , " - ", "-",f1.getTeacherName(8),f1.getTeacherName(8)} 
									};
		
		int semester;
		std::cout<<"Enter Semester Number"<<std::endl;
		std::cin>>semester;
		
		if(semester==1){
		
		d1.showDepartment();
		s1.showSemester();
		f1.showFaculty();
		for(int i=0;i<12;i++){
			for (int j=0; j<9 ; j++){
				if(array[i][j]==f1.getTeacherName(0)||array[i][j]==f1.getTeacherName(1)||array[i][j]==f1.getTeacherName(2)||array[i][j]==f1.getTeacherName(3)||array[i][j]==f1.getTeacherName(4)||array[i][j]==f1.getTeacherName(5)||array[i][j]==f1.getTeacherName(6)||array[i][j]==f1.getTeacherName(7)||array[i][j]==f1.getTeacherName(8))
				{
					std::cout<<std::endl;
					
					std::cout<<"Time: "<<array[0][j]<<std::endl<<"Room No: "<<array[i][0] <<std::endl<<"Teacher: "<<array[i][j]<<std::endl;
				}
			}
			std::cout<<std::endl;
		}
	}
	if(semester==2){
		d2.showDepartment();
		s2.showSemester();
		f2.showFaculty();
		for(int i=0;i<12;i++){
			for (int j=0; j<9 ; j++){
				if(array[i][j]==f2.getTeacherName(0)||array[i][j]==f2.getTeacherName(1)||array[i][j]==f2.getTeacherName(2)||array[i][j]==f2.getTeacherName(3)||array[i][j]==f2.getTeacherName(4)||array[i][j]==f2.getTeacherName(5)||array[i][j]==f2.getTeacherName(6))
				{
					std::cout<<std::endl;
					
					std::cout<<"Time: "<<array[0][j]<<std::endl<<"Room No: "<<array[i][0] <<std::endl<<"Teacher: "<<array[i][j]<<std::endl;
				}
			}
			std::cout<<std::endl;
		}
	}
	
	if(semester==3){
		d3.showDepartment();
		s3.showSemester();
		f3.showFaculty();
		for(int i=0;i<12;i++){
			for (int j=0; j<9 ; j++){
				if(array[i][j]==f3.getTeacherName(0)||array[i][j]==f3.getTeacherName(1)||array[i][j]==f3.getTeacherName(2)||array[i][j]==f3.getTeacherName(3)||array[i][j]==f3.getTeacherName(4)||array[i][j]==f3.getTeacherName(5)||array[i][j]==f3.getTeacherName(6)||array[i][j]==f3.getTeacherName(7))
				{
					std::cout<<std::endl;
					
					std::cout<<"Time: "<<array[0][j]<<std::endl<<"Room No: "<<array[i][0] <<std::endl<<"Teacher: "<<array[i][j]<<std::endl;				}
			}
			std::cout<<std::endl;
		}
	}
	
		if(semester==4){
		d4.showDepartment();
		s4.showSemester();
		f4.showFaculty();
		for(int i=0;i<12;i++){
			for (int j=0; j<9 ; j++){
				if(array[i][j]==f4.getTeacherName(0)||array[i][j]==f4.getTeacherName(1)||array[i][j]==f4.getTeacherName(2)||array[i][j]==f4.getTeacherName(3)||array[i][j]==f4.getTeacherName(4)||array[i][j]==f4.getTeacherName(5)||array[i][j]==f4.getTeacherName(6))
				{
					std::cout<<std::endl;
					
					std::cout<<"Time: "<<array[0][j]<<std::endl<<"Room No: "<<array[i][0] <<std::endl<<"Teacher: "<<array[i][j]<<std::endl;				}
			}
			std::cout<<std::endl;
		}
	}
	
		if(semester==5){
		d5.showDepartment();
		s5.showSemester();
		f5.showFaculty();
		for(int i=0;i<12;i++){
			for (int j=0; j<9 ; j++){
				if(array[i][j]==f5.getTeacherName(0)||array[i][j]==f5.getTeacherName(1)||array[i][j]==f5.getTeacherName(2)||array[i][j]==f5.getTeacherName(3)||array[i][j]==f5.getTeacherName(4)||array[i][j]==f5.getTeacherName(5)||array[i][j]==f5.getTeacherName(6))
				{
					std::cout<<std::endl;
					
					std::cout<<"Time: "<<array[0][j]<<std::endl<<"Room No: "<<array[i][0] <<std::endl<<"Teacher: "<<array[i][j]<<std::endl;
				}
			}
			std::cout<<std::endl;
		}
	}
	
		if(semester==6){
				d6.showDepartment();
				s6.showSemester();
				f6.showFaculty();
		for(int i=0;i<12;i++){
			for (int j=0; j<9 ; j++){
				if(array[i][j]==f6.getTeacherName(0)||array[i][j]==f6.getTeacherName(1)||array[i][j]==f6.getTeacherName(2)||array[i][j]==f6.getTeacherName(3)||array[i][j]==f6.getTeacherName(4)||array[i][j]==f6.getTeacherName(5))
				{
					std::cout<<std::endl;
					
					std::cout<<"Time: "<<array[0][j]<<std::endl<<"Room No: "<<array[i][0] <<std::endl<<"Teacher: "<<array[i][j]<<std::endl;
				}
			}
			std::cout<<std::endl;
		}
	}
	
		if(semester==7){
				d7.showDepartment();
				s7.showSemester();
				f7.showFaculty();
		for(int i=0;i<12;i++){
			for (int j=0; j<9 ; j++){
				if(array[i][j]==f7.getTeacherName(0)||array[i][j]==f7.getTeacherName(1)||array[i][j]==f7.getTeacherName(2)||array[i][j]==f7.getTeacherName(3)||array[i][j]==f7.getTeacherName(4)||array[i][j]==f7.getTeacherName(5)||array[i][j]==f7.getTeacherName(6))
				{
					std::cout<<std::endl;
					
					std::cout<<"Time: "<<array[0][j]<<std::endl<<"Room No: "<<array[i][0] <<std::endl<<"Teacher: "<<array[i][j]<<std::endl;
				}
			}
			std::cout<<std::endl;
		}
	}
	
	
		if(semester==8){
				d8.showDepartment();
				s8.showSemester();
				f8.showFaculty();
		for(int i=0;i<12;i++){
			for (int j=0; j<9 ; j++){
				if(array[i][j]==f8.getTeacherName(0)||array[i][j]==f8.getTeacherName(1)||array[i][j]==f8.getTeacherName(2)||array[i][j]==f8.getTeacherName(3)||array[i][j]==f8.getTeacherName(4))
				{
					std::cout<<std::endl;
					
					std::cout<<"Time: "<<array[0][j]<<std::endl<<"Room No: "<<array[i][0] <<std::endl<<"Teacher: "<<array[i][j]<<std::endl;
				}
			}
			std::cout<<std::endl;
		}
	}
	
	

		
 }
