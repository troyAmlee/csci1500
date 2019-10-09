#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int getWeight(){
    float package;
    cout << "Enter package weight(oz): ";
    cin >> package;
    return package;
}

float deliveryCharge(float weight){
    int multiple = ((weight - 16)/4);
    float additionalcharge = multiple*0.50;
    float totalcharge = 3.00 + additionalcharge;
    return totalcharge;
}

void displayCharge(){
    int ounces = getWeight();
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);    cout << "Package weight = " 
         << ounces/16
         << " lb. " 
         << ounces%16
         << " oz. "
         << endl
         << "Delivery charge = $"
         << deliveryCharge(ounces);
}

int main(){
    displayCharge();
}