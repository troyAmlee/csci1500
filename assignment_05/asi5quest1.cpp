#include <iostream>
#include <iomanip>
using namespace std;

//main: calculate and store the first 20 fib # in array
//function2: print table of the numbers + a table of ratios (n/n-1)

void printFib(double arr[2][21]);

int main(){
	double fibarr[2][21];
	fibarr[0][0] = 0;
	fibarr[0][1] = 1;
	for(int i = 1; i < 20; i++){
		fibarr[0][i+1] = fibarr[0][i-1]+fibarr[0][i];
	}
	for(int j = 1; j <= 20; j++){
		if(fibarr[0][j-1] == 0 ){
			fibarr[1][j-1] = 0;
			continue;
		}
		else{

			fibarr[1][j] = (fibarr[0][j]/fibarr[0][j-1]);
			
		}
	}
	
	printFib(fibarr);
	
	return 0;
}

void printFib(double arr[2][21]){
	cout << setw(20) << "FIB#" << setw(20) << "RATIO" << setw(20) << endl;
	for(int i = 0; i < 20; i++){
		
		cout << setw(20) << arr[0][i] << setw(20) << arr[1][i] << setw(20) << endl;		
		
	}
	
	
}

