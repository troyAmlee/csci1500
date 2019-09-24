#include <iostream>
#include <string>
using namespace std;
//4. A mail order company sells Jesse Ventura tee shirts for $11.95 each if fewer than four are ordered, 
//$9.95 each if at least four, but less than eight are ordered, 
//and $7.95 each if at least eight are ordered. 
//The company charges a shipping and handling fee that depends on the total price of the order, as shown in the table below:
//Total price of order		Fee
//$0 - $25.00				$3.50
//$25.01 - $75.00			$5.95
//$75.01 or more			$7.95
//
//Write a program to input the number of shirts to be purchased and output the total cost of the shirts, 
//the shipping and handling charge, and the total final cost. 
//Display all monetary values with a dollar sign and two decimal places of accuracy. 
//Note: Refer to chapter one of our text to see how to format floating point output to two places of accuracy. 
//Here is an example of what output should look like from running your program (user input is in bold):
//Enter number of shirts: 7
//Total shirt cost = $69.65
//Shipping and handling = $5.95
//Total final cost = $75.60


int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	int shirts;
	double shirt_price;
	double fee;
	double total_finalCost;
	
	cout << "Enter number of shirts: ";
	cin >> shirts;
	
	if (shirts < 4){
		shirt_price = 11.95;
	}
	else if (shirts >= 4 && shirts < 8){
		shirt_price = 9.95;
	}
	else {
		shirt_price = 7.95;
	}
	
	double total_price = shirt_price*shirts;
	
	if (total_price > 0 && total_price <= 25.00){
		fee = 3.50;
	}
	else if (total_price >= 25.01 && total_price <= 75.00){
		fee = 5.95;
	}
	else if (total_price >= 75.01) {
		fee = 7.95;
	}
	
	
	cout << "Shirt price: $" << shirt_price << endl
		 << "Total shirt cost = $" << total_price << endl
		 << "Shipping and handling = $" << fee << endl
		 << "Total final cost = $" << total_price + fee << endl;
	
	return 0;
}
