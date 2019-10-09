#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int y;

void leapYear(int year){
    if(year%400 == 0 || year%4 == 0 && year%100 != 0){
        cout << year
             << " is a leap year"
             << endl;
    }
    else{
        cout << year
             << " is not a leap year"
             << endl;
    }
}

int main(){
    cout << "Enter year: ";
    cin >> y;
    leapYear(y);
    return 0;
}