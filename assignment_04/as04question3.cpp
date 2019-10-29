#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

double bills(double& change, int& twenty, int& ten, int& five, int& one);

double coins(double& change, int& quarter, int& dime, int& nickel, int& penny);

int main(){
	char character;
	double purAmt = 0.00;
	double tender = 0.00;
	int twenties = 0;
	int tens = 0;
	int fives = 0;
	int ones = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;
	cout << "Enter purchase amount: ";
	cin >> purAmt;
	cout << "Enter amount tendered: ";
	cin >> tender;
	
	cout << "Amount of purchase = " << purAmt << endl;
	cout << "Amount tendered: " << tender << endl;
	
	double changedue = (tender - purAmt);
	
	cout << "Change due: " << changedue << endl;
	
	bills(changedue, twenties, tens, fives, ones);
	
	cout << "Bills:" 
		 << endl 
		 << "| "
		 << twenties 
		 << " - $20's  | " 
		 << tens 
		 << " - $10's  | " 
		 << fives 
		 << " - $5's  | " 
		 << ones 
		 << " - $1's  | "
		 << endl;
	
	coins(changedue, quarters, dimes, nickels, pennies);
	
	cout << "Coins:" 
		 << endl 
		 << "| "
		 << quarters 
		 << " - quarter(s)  | " 
		 << dimes 
		 << " - dime(s)  | " 
		 << nickels 
		 << " - nickel(s)  | " 
		 << pennies 
		 << " - penny(ies)  | " 
		 << endl;
		 
		 cout << "Continue (y or n)? ";
		 while(cin >> character){
		 	if (character == 'y' || character == 'Y'){
		 		cout << "------------------------------------------------ \n";
		 		main();
		 	}
		 	else{
		 		_Exit(1);
		 	}
		 }

}

double bills(double& change, int& twenty, int& ten, int& five, int& one){
	twenty = change/20;
	double leftovers = fmod(change, 20);
	ten = leftovers/10;
	leftovers = fmod(leftovers, 10);
	five = leftovers/5;
	leftovers = fmod(leftovers, 5);
	one = leftovers/1;
	leftovers = fmod(leftovers, 1);
	change = leftovers;
}

double coins(double& change, int& quarter, int& dime, int& nickel, int& penny){
	quarter = change/.25;
	double long leftovers = fmod(change, .25);
	dime = leftovers/.10;
	leftovers = fmod(leftovers, .10);
	nickel = leftovers/.05;
	leftovers = fmod(leftovers, .05);
	penny = (leftovers/.01)+fmod(leftovers, .01);
	leftovers = fmod(leftovers, .01);
	change = leftovers;
}


