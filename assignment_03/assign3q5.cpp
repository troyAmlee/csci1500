#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double quad(double a, double b, double c, double x){
    return a*pow(x,2)+b*x+c;
}

int main(){
    double aye;
    double bee;
    double cee;
    double ex;
    cout << "f(x) = ax² + bx + c" << endl;
    cout << "Enter a, b, and c: ";
    cin >> aye >> bee >> cee;
    while(aye == 0){
        cout << "a cannot be 0" 
             << endl
             << "Please enter an integer for a besides 0: ";
        cin >> aye;
    }
    cout << "Enter x: ";
    cin >> ex;

    cout << "Quadratic function value = " 
         << quad(aye, bee, cee, ex); 

    return 0;
}