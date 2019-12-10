#include <iostream>
using namespace std;

double recurs(int integer);

int main(){
	int inti = 0;
	cout << "Please enter a positive integer: ";
	cin >> inti;
	cout << recurs(inti) << endl;	
	
	return 0;
}

double recurs(int integer){
	if(integer == 0){
		return 0;
	}
	else{
		return recurs(integer - 1) + integer;
		
	}
}
