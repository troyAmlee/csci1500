#include <iostream>
using namespace std;

void time(int seconds, int & hours,int & min,int & sec ){
	
 hours = seconds / 3600;
 min = (seconds % 3600) / 60;
 sec = seconds % 60;
	
}

int main(){
	
	int seconds, hours, min, sec;
	
	cout << "Enter a time in seconds : ";
	
	cin >> seconds;
	
	time (seconds,hours,min,sec);
	
	cout << seconds << " seconds = " 
	     << hours << " hour(s) "
	     << min << " minute(s) " 
		 << sec << " second(s) ";
	
	return 0;
}

