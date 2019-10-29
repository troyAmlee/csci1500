#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void divisors(int num){
    int count = 0;
    double totalsumdiv = 0;
<<<<<<< HEAD
    int array1 [200000];
=======
    double array1 [200000];
>>>>>>> d5ed506f84ac53f74dd16c68bcbb960654998029
    for(int i = 2; i < num; i++){
        if(num%i == 0){
            array1[count] = i;
            cout << array1[] << endl;
            count++;
        }
    }
    cout << "Proper divisors: ";
    for(int j = 0; j < count; j++){
        cout << " " << array1[j];
        totalsumdiv = totalsumdiv + array1[j];
    }
    cout << "\nNumber of proper divisors = " 
         << count
         << endl
         << "Sum of proper divisors = "
         << totalsumdiv
         << endl;
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
            cout << "Enter a number: ";
            continue;
        }
        else{
            break;
        }
    }while(cin >> someint);
        
    
}
