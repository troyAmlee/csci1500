#include <iostream>
#include<iomanip>
using namespace std;



int main (){
	
	
	int num [8];
	int sum = 0;
	double average = 0;
	
	for (int i = 0; i < 8; i ++){
		
		
		cin >> num[i];
		
		sum+= num[i];
	}
	
	
	average = sum/8.0;
	
	cout << " Table "<<endl;
	
	for (int i = 0 ; i < 8; i ++){
		
		
		cout << num[i] << setw(7) << num[i] - average << endl;
		
		
		
	}
	
	
	
	return 0;
}
