#include <cstring>
#include <iostream>

using namespace std;

int main(){
	char str[20];
	
	char strcopy[25] = {'c', 'o', 'o', 'l', '\0'};
	char fullName[80];
	
//	strcpy(strcopy, str);
	
	cout << strcopy 
		 << endl 
		 << "Size: " 
		 << sizeof(str) 
		 << endl 
		 << "Copied string true?: " 
		 << strcmp(str, strcopy) 
		 << endl
		 << strcat(str, strcopy)
		 << endl
		 << "Length of str: "
		 << strlen(str)
		 << endl;
	cout << "Hello, what is your name?: ";
	cin.getline(fullName, 80);
	cout << "My name is " << fullName << endl;
	return 0;
}
