#include<iostream>
#include<iomanip>
using namespace std;



int main (){
	

		int row [3][3];
		{
			
			cout << " Enter row 1:";
			cin >> row [0][0] >> row [1][0] >> row [2][0] ;
			cout << "Enter row 2: ";
			cin >> row [0][1] >>  row [1][1] >> row [2][1];
			cout << "Enter row 3 :";
			cin >> row [0] [2] >>  row [1][2] >>  row [2][2];
	        cout << " Table :" <<endl;
	        cout << row[0] [0] << setw(7) << row [1][0] << setw(7) << row [2][0] <<endl;
	        cout << row[0] [1]<< setw(7) << row [1][1] << setw(7) << row [2][1]<<endl;
	        cout << row[0] [2]<< setw(7)  << row [1][2]<< setw(7) << row [2][2]<<endl;
	        
			cout << "  ---------- " <<endl;
			
			int sum1=0;
			int sum2=0;
			int sum3=0;
			sum1= row[0] [0] + row[0] [1] + row[0] [2];
			sum2 = row[1] [0] + row[1] [1] + row[1] [2];
			sum3 = row[2] [0] + row[2] [1] + row[2] [2];
			
			cout << sum1 << setw(7) <<  sum2 << setw(7) <<  sum3;
            			
			
		}
				
	
		

	
	
return 0;	
	
	
	
}


