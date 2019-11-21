#include <iostream>
#include<cmath>
using namespace std;

const double pi=3.141592654;

double calc (double  radius, double height);

double calc (double radius );

int main()
{
	double r,h;
	int sel;
	cout << "Choose Shape:  1=circle  2=can  => ";
	cin >> sel;
	cout << "Enter radius: ";
	cin >> r;
	if(sel==1)
		cout << "Area = " << calc(r) << endl;
	else
	{
		cout << "Enter height: ";
		cin >> h;
		cout << "Volume = " << calc(r,h) << endl;
	}
      return 0;
  }
  
  double calc (double  radius, double height){
  	
  	return pi * pow(radius,2)*height;
  	
  	
  	
  	
  }

double calc (double radius ){
	
	return pi*pow (radius,2) ;
	
	
}
