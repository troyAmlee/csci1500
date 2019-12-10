
#include <iostream>
using namespace std;

int const ARRAY_SIZE =10;                         //define a constant
void readArray(double arr[ARRAY_SIZE]);     //function declarations
double avg(double arr[ARRAY_SIZE]);
double var(double arr[ARRAY_SIZE], double value);

int main()
{          double a[ARRAY_SIZE], average;  //declare an array of double with size ARRAY_SIZE
                                                            //declare a variable of type double 
	readArray(a);                               //read input numbers to the array a
	average = avg(a);                   //calculate the average of all numbers in the array a
	cout << "The numbers: ";
	for (int i = 0; i<ARRAY_SIZE; i++)   //output each number in the array a
	{
		cout << a[i]<< " ";
	}
	cout << "The average = " << average << endl;   //output the average
	cout << "The variance = " << var(a, average) << endl; //output the variance
	return 0;
}




void readArray(double arr[ARRAY_SIZE])
{ cout << "input 100 numbers in the array: ";
  for(int i = 0; i < ARRAY_SIZE; i++){
  	cin >> arr[i];
  }


}

double avg(double arr[ARRAY_SIZE])
{
	double average = 0;
	for(int i = 0; i < ARRAY_SIZE; i++){
		average = average + arr[i];
	}
	return average/ARRAY_SIZE;

}
double var(double arr[ARRAY_SIZE], double value)
{        
	double variant = 0;  
	for(int i = 0; i < ARRAY_SIZE; i++){
		variant = variant + ((arr[i] - value)*(arr[i] - value));
	}
	return variant/ARRAY_SIZE;

}


