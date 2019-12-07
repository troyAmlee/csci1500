#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string sentence = "";
	string word;
	int wordCount = 0;
	string longestWord = "";
	double wordSum = 0;
	do{
		cout << "Enter a sentence: ";
		cin >> word;
		
		if((word[0] != ',' && word[0] != ';' && word[0] != '.' && (word[0] != '!') && word[0] != '?')){
			wordCount++;
			wordSum = wordSum + word.length();	
		}
		
		if(word.length() >= longestWord.length()){
			longestWord = word;
		}
		sentence = sentence + word + " ";
		
	}while(!((word[0] == '.') || (word[0] == '!') || (word[0] == '?')));
	cout << sentence << endl;
	cout << "Number of words = " << wordCount << endl;
	cout << "Average word length = " << wordSum/wordCount << endl;
	cout << "Longest word: " << longestWord << endl;
	
	return 0;
}
