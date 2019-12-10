#include <iostream>
using namespace std;

struct Time{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
};

void getTime(Time& Ticks);

int main(){
	Time Tock;
	getTime(Tock);
	cout << "The time is " << Tock.hours << " hours " << Tock.minutes << " minutes " << "and " << Tock.seconds << " seconds. " << endl;
}

void getTime(Time& Ticks){
	int time = 0;
	cout << "What time is it? ";
	cin >> time;
	Ticks.hours = time/10000; //123456/10000
	Ticks.minutes = (time%10000)/100;
	Ticks.seconds = time%100;
}
