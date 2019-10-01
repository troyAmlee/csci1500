#include <iostream>
#include <string>

using namespace std;

/*
 * Assignment 02, Question 2
 * 
Variables required:
credits (integer) stores the number of college credits
grade_level (string) stores the string indicating the grade level

Pseudocode solution:
Display "Please enter the number of college credits you have completed so far: "
Read the number of credits into the variable credits
if credits < 32
    grade_level = "Freshman"
else if credits >= 32 and credits <= 63
    grade_level = "Sophomore"
else if credits >= 64 and credits <= 95
    grade_level = "Junior"
else
    grade_level = "Senior"
Display "Grade level: " and grade_level
*/

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
