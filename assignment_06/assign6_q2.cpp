#include <iostream>
#include <iomanip>
using namespace std;

long digits(long digit);

int main(){
	long num;
	char option = 'x';
	
	do{
		cout << "Enter an integer number (negative or zero is OK): ";
		cin >> num;
		cout << "The number of digits in number " << num << " is " << digits(num) << endl;
		cout << "Continue? (y or n) ";
		cin >> option;
	} while(option == 'y' || option == 'Y');

	return 0;
}

long digits(long digit){
	if(digit/10 == 0){
		return 1;
	}
	else{
		return digits(digit/10) + 1;
	}
}
