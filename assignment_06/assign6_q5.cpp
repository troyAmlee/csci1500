#include <iostream>
#include <string>

using namespace std;

int main(){
	int number = 0;
	int starting = 0;
	string concat = "";
	string reverseCat = "";
	cout << "Enter a number to convert to binary: ";
	cin >> number;
	starting = number;
	while(number/2 != 0){
		string convert = to_string(number%2); //use updated compiler to run
		concat = concat + convert;
		number = number/2;
		if(number/2 == 0){
			convert = to_string(number%2);
			concat = concat + convert;
		}
	}
	
	for(int i = 1; i <= concat.length(); i++){
		//cout << concat.length() - i << endl;
		reverseCat = reverseCat + concat[concat.length() - i];
		//cout << "Reversal: " << reverseCat << endl;
	}
	
	cout << starting << " decimal = " << reverseCat << " binary" << endl;
	return 0;
}

