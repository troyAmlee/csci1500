#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int bills(int& change, int& twenty, int& ten, int& five, int& one);

int coins(int& change, int& quarter, int& dime, int& nickel, int& penny);

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
	int temp = changedue*100;
	
	cout << "Change due: $" << changedue << endl;
	
	bills(temp, twenties, tens, fives, ones);
	
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
	
	coins(temp, quarters, dimes, nickels, pennies);
	
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

int bills(int& change, int& twenty, int& ten, int& five, int& one){
	twenty = change/2000;
	int leftovers = change%2000;
	ten = leftovers/1000;
	leftovers = leftovers%1000;
	five = leftovers/500;
	leftovers = leftovers%500;
	one = leftovers/100;
	leftovers = leftovers%100;
	change = leftovers;
}

int coins(int& change, int& quarter, int& dime, int& nickel, int& penny){
	quarter = change/25;
	int leftovers = change%25;
	dime = leftovers/10;
	leftovers = leftovers%10;
	nickel = leftovers/5;
	leftovers = leftovers%5;
	penny = leftovers/1;
	leftovers = leftovers%1;
	change = leftovers;
}


