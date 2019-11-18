#include <iostream>
#include <istream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	string stores[11];
	double prices[11];
	for(int k = 0; k < 11; k++){
		stores[k] = "void";
		prices[k] = 99999999999999999;
	}
	double min = 999999999999999999;
	
	
	for(int i = 0; i < 11; i++){
		cout << "To quit and proceed to lowest price enter Q" << endl;
		cout << "Please enter store name that sells a Macbook Pro: " << endl;
		cin >> stores[i];
		if(stores[i] == "q" || stores[i] == "Q"){
			break;
		}
		cout << "Please enter the price they sell it for: ";
		cin >> prices[i];
		if(prices[i] < min){
			min = prices[i];
		}
	}
	
	cout << "This is the Minimum Price: " << min << endl << endl;
	
	cout << "Stores With Lowest Price Of: " << min << endl;
	for(int j = 0; j < 11; j++){
		if(prices[j] == min){
			cout << stores[j] << " " << prices[j] << endl;
			
		}
	}
	cout << "\n Stores Within 10% Of The Lowest Price:" << endl;
	for(int l = 0; l < 11; l++){
		if(prices[l] <= min + min*.10){
			cout << stores[l] << " " << prices[l] << endl; 
		}
	}
	
	return 0;
}
