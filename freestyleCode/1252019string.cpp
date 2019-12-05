#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
//5, 6 struct, 13?recursion, chapter 9

struct gal {
	
};

string swap(const string& start, const string& end);
string reverse(const string& s);

int main(){
	
	
	
	return 0;
}

string swap(const string& start, const string& end){
	string temp;
	
}

string reverse(const string& s){
	int start = 0;
	int end = s.length();
	string temp(s);
	
	while(start < end){
		end--;
		swap(temp[start], temp[end]);
		start++;
	}
	return temp;
}
