#include <iostream>
#include <iomanip>
using namespace std;

struct Time{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
};

void sumTime(Time& time1, Time time2);


int main(){
	Time Tone, Ttwo;
	char colon;
	char cont = 'y';
	while(cont == 'y'){
		cout << "Enter the 1st time (hh:mm:ss): ";
		cin >> Tone.hours >> colon >> Tone.minutes >> colon >> Tone.seconds;
		cout << "Enter the 2nd time (hh:mm:ss): ";
		cin >> Ttwo.hours >> colon >> Ttwo.minutes >> colon >> Ttwo.seconds;
		sumTime(Tone, Ttwo);
		cout << "Sum of times (hh:mm:ss) = " << Tone.hours << ":" << Tone.minutes << ":" << Tone.seconds << endl;
		cout << "Enter another time pair (y or n)? ";
		cin >> cont;
	}
	
	return 0;
}

void sumTime(Time& time1, Time time2){
	int secRem = 0;
	int secCarry = 0;
	int minRem = 0;
	int minCarry = 0;
	int houRem = 0;
	int houCarry = 0;
	secCarry = (time1.seconds + time2.seconds)/60;
	minCarry = (time1.minutes + time2.minutes)/60;
	secRem = (time1.seconds + time2.seconds)%60;
	minRem = (time1.minutes + time2.minutes + secCarry)%60;
	houRem = (time1.hours + time2.hours + minCarry)%24;
	time1.hours = houRem;
	time1.minutes = minRem;
	time1.seconds = secRem;
}

