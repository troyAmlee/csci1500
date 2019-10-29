#include <iostream>
using namespace std;

const double pi = 3.14159265;

double input(double& a, double& b, double& c); //triangle

double input(double& l, double& w); //rectangle

double input(double& diameter); //circle

double perim(double& a, double& b, double& c); //triangle

double perim(double& l, double& w); //rectangle

double perim(double& diameter); //circle

int main(){
	double sideA = 0;
	double sideB = 0;
	double sideC = 0;
	double length = 0;
	double width = 0;
	double diameter = 0;
	int option = 0;
	
	cout << "Select shape (1=circle, 2=rectangle, 3=triangle, other to exit): ";
	cin >> option;
	
	switch(option){
		case 3:
			input(sideA, sideB, sideC);
			cout << "Perimeter: " << perim(sideA, sideB, sideC) << endl;
			main();
			break;
		case 2:
			input(length, width);
			cout << "Perimeter: " << perim(length, width) << endl;
			main();
			break;
		case 1:
			input(diameter);
			cout << "Perimeter: " << perim(diameter) << endl;
			main();
			break;
		default:
			cout << "Bye..." << endl;
			break;
	}
	
	
	return 0;
}

double input(double& a, double& b, double& c){
	cout << "Enter triangle side lengths: ";
	cin >> a >> b >> c;
}

double input(double& l, double& w){
	cout << "Enter rectangle length and width: ";
	cin >> l >> w;
}

double input(double& diameter){
	cout << "Enter circle diameter: ";
	cin >> diameter;
}

double perim(double& a, double& b, double& c){
	return a+b+c;
}

double perim(double& l, double& w){
	return 2*(l+w);
}

double perim(double& diameter){
	return pi*diameter;
}

