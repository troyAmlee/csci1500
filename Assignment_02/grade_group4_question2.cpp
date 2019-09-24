#include <iostream>
#include <string>

//2. The grade level of undergraduate college students is determined according to the following schedule:
//
//Number of credits completed	Grade level
//less than 32	Freshman
//32 to 63	Sophomore
//64 to 95	Junior
//96 or more	Senior
//
//Using this information, 
//write a program that prompts for and reads the integer number of credits that a student has completed, 
//determines the student's grade level, and displays the grade level. Here is an example of what output should look like from running your program (user input is in bold):
//Enter number of credits: 70
//Grade level: Junior


using namespace std;

int main(){
	int credits;
	string grade_level;
	
	cout << "Please enter the number of college credits you have completed so far: ";
	cin >> credits;
	
	if (credits < 32){
		grade_level = "Freshman";
	}
	else if (credits >= 32 && credits <= 63){
		grade_level = "Sophomore";
	}
	else if (credits >= 64 && credits <= 95){
		grade_level = "Junior";
	}
	else {
		grade_level = "Senior";
	}
		
	
	cout << "Grade level: " << grade_level;
		
	return 0;
}
