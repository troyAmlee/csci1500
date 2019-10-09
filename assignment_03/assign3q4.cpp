#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double hypot(double a, double b){
    double csquared = pow(a,2) + pow(b,2);
    double c = sqrt(csquared);

    return c;
}

int main(){
    double sidea, sideb;
    cout << "Enter the side lengths of a triangle: ";
    cin >> sidea >> sideb;
    cout << "First side length = " << sidea << endl;
    cout << "Second side length = " << sideb << endl;
    cout << "Hypotenuse length = " << hypot(sidea, sideb) << endl;

    return 0;
}