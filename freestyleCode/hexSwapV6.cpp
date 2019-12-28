#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <dirent.h>

using namespace std;


void swap(string& fileName);

void displayDir(string fil);

int main(){
	
	string file = "";
	string dir = "";
	char end = 'y';
	cout << "input directory path: ";
	getline(cin,dir);
	displayDir(dir);
	
	while(end == 'y'){
		cout << "Please input the filename to convert to a swapped version (input end to exit): ";
		getline(cin,file);
		string filestart = file;
		
	
		swap(file);
		
		rename(filestart.c_str(), file.c_str());
		cout << "The swapped name is " << file << endl;
		
		cout << "Continue? (y or n): ";
		cin >> end;
		
	}
	
	cout << "Enjoy, cya later nigga" << endl;
	
	return 0;
}

void swap(string& fileName){
	
	for(int i = 0; i < fileName.length(); i++){
		if(fileName[i+1] == '.'){
			break;
		}
		else{
			if(i == 0){
				char temp = 'x';
				temp = fileName[i];
				fileName[i] = fileName[i+1];
				fileName[i+1] = temp;
			}
			else if(i%2 == 0){
				char secTemp = 'x';
				secTemp = fileName[i];
				fileName[i] = fileName[i+1];
				fileName[i+1] = secTemp;
			}
		}
		
	}
	
}

void displayDir(string fil){
	DIR *dir;
	struct dirent *ent;
	if ((dir = opendir (fil.c_str())) != NULL) {
	  /* print all the files and directories within directory */
	  while ((ent = readdir (dir)) != NULL) {
	    printf ("%s\n", ent->d_name);
	    string filestart = ent->d_name;
	    string fileEnd = ent->d_name;
	    if(filestart == "hexSwapV6.cpp"){
	    	continue;
		}
		if(filestart == "hexSwapV6.exe"){
	    	continue;
		}
	    swap(fileEnd);
	    
	    string fulldirect = fil + "\\" + filestart;
	    string seconddirect = fil + "\\" + fileEnd;
	    
	    cout << fulldirect << endl;
	    
	    rename(fulldirect.c_str(), seconddirect.c_str());
	    
	  }
	  closedir (dir);
	} else {
	  /* could not open directory */
	  perror ("");
	  cout << "Error" << endl;
	}
}

