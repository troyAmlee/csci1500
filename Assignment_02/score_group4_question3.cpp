#include <iostream>
#include <string>

using namespace std;

//3. Write a program that prompts for and inputs three exam scores (an integer between 0 and 100) 
//and then outputs both the highest and the lowest of the scores. 
//Note: Do not assume that the user will enter the scores in any particular numerical order. 
//Here is an example of what output should look like from running your program (user input is in bold):
//Enter three exam scores: 70 60 90
//Highest score = 90
//Lowest score = 60


int main(){
	double first_score;
	double second_score;
	double third_score;
	double highest;
	double lowest;
	
	cout << "Please enter three exam scores: ";
	cin >> first_score >> second_score >> third_score;
	
	if (first_score >= second_score){
		highest = first_score;
		lowest = second_score;
	}
	else {
		highest = second_score;
		lowest = first_score;
	}
	if (third_score >= highest){
		highest = third_score;
	}
	if (third_score >= lowest){
		cout << "Highest score = " << highest << endl;
		cout << "Lowest score = " << lowest << endl;
	}
	else {
		lowest = third_score;
		cout << "Highest score = " << highest << endl;
		cout << "Lowest score = " << lowest << endl;
	}
	
	return 0;
}


