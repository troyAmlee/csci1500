#include <iostream>
#include <cmath>

/*
1.Write a program that will calculate and display the sum
1 + 1/2 + 1/3 + 1/4 + ...+1/n 
for any positive integer n input by the user. 
Note: For accuracy, use the double data type to calculate the sum.
Here is an example of what output should look like 
from running your program (user input is shown in bold):
Enter a positive integer: 5
Sum of the first 5 reciprocals = 2.28333
*/

using namespace std;

int main(){
    double num;
    double i;
    double total;
    cout << "Enter a positive integer: ";
    cin >> num;
    for (i = 0; i <= num; i++){
    	if (i == 0){
    		total = 0;
		}
		else{
			total = total + 1/i;
		}
    }
    cout << "Sum of the first " 
         << num 
         << " reciprocals = " 
         << total;
    return 0;
}