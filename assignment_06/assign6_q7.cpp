#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string asterisk(int num, char ast);

int main(){
	int rows = 0;
	int width = 0;
	int numAst = 0;
	cout << "Enter number of rows (>0): ";
	cin >> rows;
	do{
		if(rows < 0){
			cout << "Rows are less than zero, please input again: ";
			cin >> rows;
		}
	}while(rows < 0);
	
	width = (2*rows - 1);
	
	for(int i = 1; i <= rows; i++){
		numAst = 2*i - 1;
		cout << setw(width) << asterisk(numAst, '*') << setw(width) << endl;
		width++;
	}
	
	
	return 0;
}

string asterisk(int num, char ast){
	string total = "";
	for(int i = 0; i < num; i++){
		total = total + ast;
	}
	return total;
}

