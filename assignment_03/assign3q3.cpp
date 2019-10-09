#include <iostream>
#include <string>
#include <cmath>

using namespace std;
double balance = 200;

int main(){
    double deposit;
    double withdraw;
    char option;
    cout << "Please enter an option." 
         << endl
         << "(B)alance  (D)eposit   (W)ithdraw  e(X)it"
         << endl;
         cin >> option;
    switch(option){
        case 'B':
            cout << "Your current balance is $" 
                 << balance 
                 << endl;
            main();
            break;
        case 'D':
            cout << "Please specify the amount to deposit: ";
            cin >> deposit;
            balance = balance + deposit;
            cout << "You deposited $" 
                 << deposit 
                 << endl
                 << "Your new balance is $" 
                 << balance 
                 << endl;
            main();
            break;
        case 'W':
            cout << "Please specify an amount to withdraw: ";
            while(cin >> withdraw){
                if(withdraw > balance){
                    cout << "You chose $" 
                         << withdraw 
                         << "." 
                         << endl
                         << "You cannot take more than $"
                         << balance
                         << endl
                         << "Try again."
                         << endl;
                }
                else if (withdraw <= balance){
                    balance = balance - withdraw;
                    cout << "Your new balance is $"
                         << balance
                         << endl;
                    main();
                    break;
                }
            
            }
            break;
        case 'X':
            cout << "Thank you for banking with us! See you next time."
                 << endl
                 << "Balance = $"
                 << balance;
            _Exit;
            break;
    }
    return 0;
}