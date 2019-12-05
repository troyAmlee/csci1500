#include <iostream>
#include <string>
using namespace std;


int main(){
	string arr[3][13];
	arr[1][1] = "AB";
	arr[1][2] = "BC";
	arr[1][3] = "MB";
	arr[1][4] = "NB";
	arr[1][5] = "NF";
	arr[1][6] = "NS";
	arr[1][7] = "NT";
	arr[1][8] = "ON";
	arr[1][9] = "PE";
	arr[1][10] = "PQ";
	arr[1][11] = "SK";
	arr[1][12] = "YK";
	arr[2][1] = "Alberta";
	arr[2][2] = "British Columbia";
	arr[2][3] = "Manitoba";
	arr[2][4] = "New Brunswick";
	arr[2][5] = "Newfoundland";
	arr[2][6] = "Nova Scotia";
	arr[2][7] = "Northwest Territories";
	arr[2][8] = "Ontario";
	arr[2][9] = "Prince Edward Island";
	arr[2][10] = "Quebec";
	arr[2][11] = "Saskatchewan";
	arr[2][12] = "Yukon";
	string city;
	string abbr;
	string concat;
	cout << "Enter Canadian city: ";
	getline(cin, city);
	cout << "Enter province abbreviation: ";
	cin >> abbr;

	for(int j = 1; j < 12; j++){
		if(arr[1][j] == abbr){
			concat = city + ", " + arr[2][j];
		}
	}
	
	cout << "You entered: " << concat << endl;
	
	return 0;
}
