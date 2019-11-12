#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main(){
	int userVal;
	cin >> userVal;
	int array1[userVal];
	int store = array1[userVal];
	
	cout << "Length of the Array: " << sizeof(array1)/sizeof(*array1) << endl //hard way to get the length of an array
		 << "Pointer Value (*array1): " << *array1 << endl
		 << "Size (in bytes?): " << sizeof(array1) << endl;
	main();
	
	return 0;
}
