#include <iostream>
#include <string>
using namespace std;


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
