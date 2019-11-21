#include <iostream>
#include <iomanip>

using namespace std;

long double recPower(long double digit, int exponent);

int main(){
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(9);
	long double x;
	int expo;
	char option = 'x';
	do{
		cout << "Enter a float-point number x: ";
		cin >> x;
		cout << "Enter an integer number n: ";
		cin >> expo;
		cout << "The value of x^n = " << recPower(x, expo) << endl;
		cout << "Continue (y or n)? ";
		cin >> option;
	}while(option == 'y' || option == 'Y');
		
	return 0;
}

long double recPower(long double digit, int exponent){
	//cout << "Exponent Status: " << exponent << endl;
	
	if(exponent < 0){
		return (recPower(digit, exponent + 1)*(1.0/digit));
	}
	
	if(exponent > 0){
		return recPower(digit, exponent - 1)*digit;	
	}
	
	else{
		return (1);
	}
	
}
