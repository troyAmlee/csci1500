#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
using namespace std;
//overtime wage = normalwage*1.5

double wage(double rate, double otHours = 0.0);

int main(){
	string name1, name2;
	char option = 'x';
	char option2 = 'x';
	double overtimeRate = 0;
	double payRate = 0;
	cout << "What is your name?: ";
	cin >> name1 >> name2;
	cout << "Enter rate: ";
	cin >> payRate;
	cout << "Overtime? (y or n): ";
	cin >> option;
	if (option == 'y' || option == 'Y'){
		cout << "Enter overtime hours: ";
		cin >> overtimeRate;
		cout << "Name: " << name1 << " " << name2 << " Wages: " << wage(payRate, overtimeRate) << endl;
	}
	else{
		cout << "Name: " << name1 << " " << name2 << " Wages: " << wage(payRate) << endl;
	}
	
	cout << "Enter another? (y or n): ";
	cin >> option2;
	if (option2 == 'y' || option2 == 'Y'){
		main();
	}
	else{
		_Exit(1);
	}
	
	return 0;
}

double wage(double rate, double otHours){
	return rate*40 + (otHours*rate*1.5);
}
