#include <iostream>
#include <string>

using namespace std;

int main(){
	double deposit = 0;
	double rate = 0;
	double desirable = 0;
	double total = 0;
	double years = 0;
	cout << "Enter initial deposit: ";
	cin >> deposit;
	cout << "Enter interest rate (%): ";
	cin >> rate;
	rate = rate/100;
	cout << "Enter desired end amount: ";
	cin >> desirable;
	
	while(deposit < desirable){
		deposit = deposit + deposit*rate;
		years++;	
	}
	
	cout << "It will take " << years << " years." << endl;
	cout << "Ending balance = $" << deposit << endl;
	
	
	return 0;
}
