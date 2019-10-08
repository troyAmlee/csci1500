#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    char option;
    cout << "Please enter an option." 
         << endl
         << "(B)alance  (D)eposit   (W)ithdraw  e(X)it"
         << endl;
    switch(option){
        case 'b' || 'B':
            cout << "Test";
            break;
    }
    return 0;
}