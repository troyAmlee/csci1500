#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	string firstName, lastName;
	string text, text2;
	int score;
	fstream inputStreamer;
	inputStreamer.open("player.txt");
	
	while (inputStreamer >> text){
		cout << text << endl;
	}

	inputStreamer.close();
	
	return 0;
} 