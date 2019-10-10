#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void divisors(int num){
    
    for(int i = 2; i < num; i++){
        if(num%i == 0){

        }
    }
}

int main(){
    int someint;
    char option;
    cout << "Enter a number: ";
    cin >> someint;
    do{
        divisors(someint);
        cout << "Continue? (y or n): ";
        cin >> option;
        if(option == 'y'){
            continue;
        }
        else{
            break;
        }
    }while(cin >> someint);
        
    
}