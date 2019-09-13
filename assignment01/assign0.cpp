#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int jogger();
double box();
double money();
double feetConversion();
double liquid();
double average();

int main()
{	
	jogger();
	box();
	money();
	feetConversion();
	liquid();
	average();
	
	return 0;
}

// Variables required:
// miles: (integer) to store the number of miles to jog
// totalLaps: (integer) to store the total number of laps converted
//
// Pseudocode solution:
// Display "Enter number of miles to jog: "
// Read the number of miles into the variable miles
// Let the variable totalLaps = miles*14
// Display "You need to jog " and totalLaps and " laps." and endline

int jogger(){
	int miles;
	cout << "Enter number of miles to jog: ";
	cin >> miles;
	int totalLaps = miles*14;
	cout << "You need to jog " << totalLaps << " laps." << endl;
	
	return 0;
}

// Variables required:
// length, width, height: (integer) to store the length, width, and height
// box_area, box_volume: (double) to store the boxes area, and boxes volume 
//
// Pseudocode solution:
// Display "Please enter the dimensions of your box in inches: "
// Read the length into the variable length
// Read the width into the variable width
// Read the height into the variable height
// Let the variable box_area = 2*(length*width+length*height+width*height)
// Let the variable box_volume = length*width*height
// Display "Box surface area = " and box_area and " square inches"
// Display "Box volume = " and box_volume and " cubic inches"

double box(){
	cout << "Welcome to the box calculator" << endl;
	cout << "Please enter the dimensions of your box in inches: ";
	int length;
	int width;
	int height;
	cin >> length >> width >> height;
	double boxArea = 2*(length*width+length*height+width*height);
	double boxVolume = length*width*height;
	cout << "Box surface area = " << boxArea << " square inches" << endl;
	cout << "Box volume = " << boxVolume << " cubic inches" << endl;
	
	return 0;
}

// Variables required:
// quarters, dimes, nickels, pennies: (integer) to store the number of quarters, dimes, nickels, and pennies
// totalQuarters, totalDimes, totalNickels, totalPennies: (double) to store the total of quarters, dimes, nickels, and pennies
// total: (double) to store the total amount of money added together

// Pseudocode solution:
// Display "How much change do you have?"
// Display "Enter the number of quarters: "
// Read the number of quarters into the variable quarters
// Display "Enter the number of dimes: "
// Read the number of dimes into the variable dimes
// Display "Enter the number of nickels: "
// Read the number of nickels into the variable nickels
// Display "Enter the number of pennies: "
// Read the number of pennies into the variable pennies
// Let totalQuarters = quarters*.25
// Let totalDimes = dimes*.10
// Let totalNickels = nickels*.05
// Let totalPennies = pennies*.01
// Set output decimal precision to 2
// Let total = totalQuarters+totalDimes+totalNickels+totalPennies
// Display quarters and " Quarters " and dimes and " Dimes " and nickels and " Nickels, and " and pennies and " Pennies = $"
// 		 and total

double money(){
	cout << "How much change do you have?" << endl;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	double totalQuarters;
	double totalDimes;
	double totalNickels;
	double totalPennies;
	double total;
	
	cout << "Enter number of quarters: ";
	cin >> quarters;
	cout << "Enter number of dimes: ";
	cin >> dimes;
	cout << "Enter number of nickels: ";
	cin >> nickels;
	cout << "Enter number of pennies: ";
	cin >> pennies;
	totalQuarters = quarters*.25;
	totalDimes = dimes*.10;
	totalNickels = nickels*.05;
	totalPennies = pennies*.01;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	total = totalQuarters+totalDimes+totalNickels+totalPennies;
	
	cout << quarters << " quarters, "
		 << dimes << " dimes, "
		 << nickels << " nickels, and "
		 << pennies << " pennies = $" << total << endl;
		 
	return 0;
}

// Variables required:
// feet: (integer) to store the number of feet to be converted
// yards, inches, centimeters, meters: (double) to store the number of yards, inches, centimeters, and meters
// 
// Pseudocode solution:
// Display "Please input number of feet to be converted: "
// 

double feetConversion(){
	int feet;
	double yards;
	double inches;
	double centimeters;
	double meters;
	
	cout << "Please input number of feet to be converted: ";
	cin >> feet;
	yards = (feet*12)/36;
	inches = feet*12;
	centimeters = (feet*12)*2.54;
	meters = (feet*12)*(2.54)/(100);
	
	cout << "= " << yards << " yards" << endl
		 << "= " << inches << " inches" << endl
		 << "= " << centimeters << " centimeters" << endl
		 << "= " << meters << " meters" << endl;
		 
	return 0;
}

// Variables required:

// Pseudocode solution:

double liquid(){
	int ounces;
	int leftoverOz;
	int maxQuarts;
	
	cout << "Please enter number of ounces: ";
	cin >> ounces;
	leftoverOz = ounces%32;
	maxQuarts = ounces/32;
	cout << ounces << " oz. = " << maxQuarts << " qt. " 
		 << leftoverOz << " oz." << endl;
	return 0;
}
