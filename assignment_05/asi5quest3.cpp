#include <iostream>
#include <istream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	int salespeople;
	double salesSum = 0;
	double salSum = 0;
	int counter[11];
	for(int i = 0; i < 11; i++){
		counter[i] = 0;
	}
	double value = 0;
	double salary = 0;
	do{
		cout << "Enter the weekly sales amount of a salesperson (enter a negative number to end): ";
		cin >> value;
		if(value >= 0){
			cout << "Weekly sale: " << value << setw(20) << "$Weekly salary: " << value*.09 + 200 << endl;		
		}
		salary = value*.09 + 200;
		
		if(salary >= 200 && salary <= 299){
			salespeople++;
			counter[2]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;
		}
		if(salary >= 300 && salary <= 399){
			salespeople++;
			counter[3]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;			
		}
		if(salary >= 400 && salary <= 499){
			salespeople++;
			counter[4]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;			
		}
		if(salary >= 500 && salary <= 599){
			salespeople++;
			counter[5]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;			
		}
		if(salary >= 600 && salary <= 699){
			salespeople++;
			counter[6]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;			
		}
		if(salary >= 700 && salary <= 799){
			salespeople++;
			counter[7]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;			
		}
		if(salary >= 800 && salary <= 899){
			salespeople++;
			counter[8]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;			
		}
		if(salary >= 900 && salary <= 999){
			salespeople++;
			counter[9]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;			
		}
		if(salary >= 1000){
			salespeople++;
			counter[10]++;
			salesSum = salesSum + value;
			salSum = salSum + salary;			
		}
		
		
	}while(value >= 0);
	cout << "Total weekly sales amount: " << salesSum << endl;
	cout << "Total weekly take-home salary: " << salSum << endl;
	cout << "Total number of salesperson: " << salespeople << endl;
	cout << "Number of salesperson earned salary in range $200-$299: " << counter[2] << endl;
	cout << "Number of salesperson earned salary in range $300-$399: " << counter[3] << endl;
	cout << "Number of salesperson earned salary in range $400-$499: " << counter[4] << endl;
	cout << "Number of salesperson earned salary in range $500-$599: " << counter[5] << endl;
	cout << "Number of salesperson earned salary in range $600-$699: " << counter[6] << endl;
	cout << "Number of salesperson earned salary in range $700-$799: " << counter[7] << endl;
	cout << "Number of salesperson earned salary in range $800-$899: " << counter[8] << endl;
	cout << "Number of salesperson earned salary in range $900-$999: " << counter[9] << endl;
	cout << "Number of salesperson earned salary in range $1000 and over: " << counter[10] << endl;
	return 0;
	
}
