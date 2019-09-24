//1. Write a program that prompts for and reads a floating point number and a letter. 
//If the letter following the number is F, 
//the program is to treat the number entered as a temperature in degrees Fahrenheit, 
//convert the number to equivalent degrees Celsius, and display both temperatures. 
//If the letter following the number is C, 
//the program is to treat the number entered as a temperature in Celsius, 
//convert the number to the equivalent degrees Fahrenheit, and display both temperatures. 
//Note: You may assume that the user will enter an F or a C for the letter.
//Formulas:
//"	Celsius = (5.0/9.0)*(Fahrenheit - 32.0)
//"	Farenheit = 1.8 * Celsius + 32.0
//Here are examples of what output should look like from running your program (user input is in bold):
//Run 1:
//Enter temperature and type (C or F): 15.2C
//15.2 C = 59.36 F
//Run 2:
//Enter temperature and type (C or F): 72F
//72.0 F = 22.2222 C

#include <iostream>
#include <string>
using namespace std;

int main(){
	double temp;
	char letter;
	double temp_conversion;
	cout << "Please enter a temperature in Celsius (C) or Farhenheit (F): " << endl;
	cin >> temp >> letter;
	
	if (letter == 'f' || letter == 'F'){
		temp_conversion = (5.0/9.0)*(temp - 32.0);
		cout << temp << " " << letter << " = " << temp_conversion << " C" << endl;
	}
	
	else if (letter == 'c' || letter == 'C'){
		temp_conversion = 1.8 * temp + 32.0;
		cout << temp << " " << letter << " = " << temp_conversion << " F" << endl;
	}
	return 0;
	
}

