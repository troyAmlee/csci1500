#include <iostream>
#include <string>
using namespace std;

int main()
{
   string model;
   char ans;
   cout << "Do you own a computer? (Y/N): ";
   cin >> ans;
   cin.ignore(80,'\n');
   if(ans=='Y' || ans=='y')
   {
      cout << "What model? ";
      getline(cin, model);
      cout << "The " << model << " is a great machine.\n";
   }
   return 0;
}

