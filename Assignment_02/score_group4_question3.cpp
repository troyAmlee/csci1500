#include <iostream>
#include <string>

using namespace std;


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


