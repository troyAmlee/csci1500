#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.141592654;

double calc(double rad, double hei, double& area, double& volume);

int main(){
	double radius = 0;
	double height = 0;
	double areaFinal = 0;
	double volumeFinal = 0;
	
	
	cout << "Please enter can radius (inches): ";
	cin >> radius;
	cout << "Please enter can height (inches): ";
	cin >> height;
		
	calc(radius, height, areaFinal, volumeFinal);
	cout << "Radius: " 
		 << radius 
		 << endl 
		 << "Height: " 
		 << height 
		 << endl
		 << "Can surface area = "
		 << areaFinal
		 << " square inches "
		 << endl
		 << "Can volume = "
		 << volumeFinal
		 << " cubic inches"
		 << endl;
	
	return 0;
}

double calc(double rad, double hei, double& area, double& volume){
	volume = pi*pow(rad, 2)*hei;
	area = 2*pi*rad*hei + 2*pi*pow(rad, 2);
}
