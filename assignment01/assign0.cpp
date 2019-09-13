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

int jogger(){
	int miles;
	cout << "Enter number of miles to jog: ";
	cin >> miles;
	int totalLaps = miles*14;
	cout << "You need to jog " << totalLaps << " laps." << endl;
	
	return 0;
}

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
	
	double total = totalQuarters+totalDimes+totalNickels+totalPennies;
	
	cout << quarters << " quarters, "
		 << dimes << " dimes, "
		 << nickels << " nickels, and "
		 << pennies << " pennies = $" << total << endl;
		 
	return 0;
}

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

//double average(){
//	cout << "Enter the price (x y z): " << endl;
//	double x;
//	double y;
//	double z;
//	cin >> x >> y >> z;
//	double sum;
//	sum = x + y + z;
//	double average_;
//	average_ = sum/3.0;
//	cout << "The average variable = " << average_ << endl;
//}