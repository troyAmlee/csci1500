#include <iostream>
#include <iomanip>

using namespace std;

long double recPower(long double digit, int exponent);

int main(){
	long double x;
	int expo;
	char option = 'x';
	do{
		cout << "Enter a float-point number x: ";
		cin >> x;
		cout << "Enter an integer number n: ";
		cin >> expo;
		cout << "The value of x^n = " << recPower(x, expo) << endl; // if x is 5 and expo is 3: line 36-44
		cout << "Continue (y or n)? ";
		cin >> option;
	}while(option == 'y' || option == 'Y');
		
	return 0;
}

long double recPower(long double digit, int exponent){
	cout << "Exponent Status: " << exponent << endl;
	cout << "Digit Status: " << digit << endl;
	
	if(exponent < 0){
		return (recPower(digit, exponent + 1)*(1.0/digit));
	}
	
	if(exponent > 0){
		return recPower(digit, exponent - 1)*digit;	
		/*
		recPower(5, 3)
			recPower(5, 3 - 1) * digit <-- suspended
				recPower(5, 2 - 1) * digit <-- suspended
					recPower(5, 1 - 1) * digit <-- suspended
						recPower(5, 0) == 1 <-- returns 1
							so now...
								recPower(5, 1 - 1) * digit == 1 * 5 == 5 == recPower(5, 1)
									recPower(5, 2 - 1) * digit == 5 * 5 == 25 == recPower(5, 2)
										recPower(5, 3 - 1) * digit == 25 * 5 == 125 == recPower(5, 3)					
		*/
	}
	
	else{
		return (1);
	}
	
}
