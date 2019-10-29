#include <iostream>
using namespace std;




double acres(double base, double height){
	double area = (base*height*0.5)/4840;
	return area;
}

void display(double b, double h, double area){
	cout << "Field base = " << b << " yards, " << "height = " << h << " yards" << endl;
	cout << "Field area = " << area << " acres ";
}


int main(){
	double base;
	double height;
	cout << "Enter field base (yards): ";
	cin >> base;
	cout << "Enter field height (yards): ";
	cin >> height;
	display(base, height, acres(base, height));
	return 0;
}
