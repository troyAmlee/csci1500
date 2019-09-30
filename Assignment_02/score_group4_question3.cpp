#include <iostream>
using namespace std;

/*
 * Variables required:
 * first_score, 
 * second_score, 
 * third_score, 
 * highest, 
 * lowest: (floating point) to store the first score, second score, third score,
 * 		highest score out of the three, and lowest score out of the three
 * 
 * Pseudocode solution:
 * Display "Please enter three exam scores: "
 * Read the first score, second score, and third score into the
 * 		variables first_score, second_score, and third_score
 * if first_score >= second_score
 * 		highest = first_score
 * 		lowest = second_score
 * else
 * 		highest = second_score
 * 		lowest = first_score
 * if third_score >= highest
 * 		highest = third_score
 * if third_score >= lowest
 * 		Display "Highest score = " and highest
 * 		Display "Lowest score = " and lowest
 * else
 * 		lowest = third_score
 * 		Display "Highest score = " and highest
 * 		Display "Lowest score = " and lowest
*/

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


