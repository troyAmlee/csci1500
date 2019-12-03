#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// string functions: 
/*
how to refresh an input - cin.ignore(80, '\n');, 
str.length() gives string length, 
str.at(i) returns character position
str.substring(position, length) returns a string starting at position with a length specified
str.insert(pos, str)
str.find(str1)
str.find(str1, pos)
comparison is lexicographical between strings
str.c_str() to convert from a string to a cstring
stod, stoi, stof, stol - to convert a string to a decimal, integer, float, long
*/

int main(){
	string sentence;
	sentence = "How long is this string?";
	string words;
	int n;
	cout << "Enter a sequence of words: ";
	cin >> n;
	cin.ignore(80, '\n');
	getline(cin, words);
	cout << words << endl;
	//for(int i = 0; i < )
	
	
	return 0;
}
