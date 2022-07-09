//This is the input data from data entry screens and stored in binary files
//Total 20 grade-divisions each with upto 10 subjects and one teacher per subject

struct classentity  
	{
		int classid;
		int grade;
		char divi;
		char cstream[20];
		
		int total_subjects;
		int total_lectures; //can be maximum 25
		
		struct
		{
			int subjcode;
			char subjname[20];
			int numlectures;
			struct 
			{
				int empid;
				char tname[20];
			}
			teacher;
		}
		subjects[10];
	};

const num_Days = 5;		//No. of days in a week
const num_Lect = 5; 	//No. of lectures per day
const num_Slots = 25; 	//num_Days x num_Lect
const char emptyString20[] = "                   ";  	//20 char blank string - actually 19 with null terminator in end
