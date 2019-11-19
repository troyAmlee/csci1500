#include <iostream>
#include <istream>
using namespace std;



void midpoint(int x1, int x2, int y1, int y2);

struct Point{
	
	
	int x1,x2,y1,y2;
	
	
	
	
};

int main (){
	
	char stuff;
	
	char option = 'x';
	
	Point x1,x2,y1,y2;
	
	cout << " Enter 1st point (x,y) : ";

	cin >> stuff >> x1.x1 >> stuff >> y1.y1 >> stuff;
	
	cout << "Enter 2nd point (x,y) : ";
	
	cin >> stuff >> x2.x2 >> stuff >> y2.y2 >> stuff;
	
	midpoint(x1.x1,y1.y1,x2.x2,y2.y2);
	
	cout << " Continue (y or n) ? ";
	
	cin >> option;
	
	while (option == 'y'){
		
		cout << " Enter 1st point (x,y) : ";
	
		cin >> stuff >> x1.x1 >> stuff >> y1.y1 >> stuff;
		
		cout << "Enter 2nd point (x,y) : ";
		
		cin >> stuff >> x2.x2 >> stuff >> y2.y2 >> stuff;
		
		midpoint(x1.x1,y1.y1,x2.x2,y2.y2);
		
		cout << " Continue (y or n) ? ";
		
		cin >> option;
		continue;
}
	
	if (option == 'n'){
		_Exit(1);
	}
    
	
return 0;	
	

}

void midpoint(int x1, int x2, int y1, int y2){
	
	
	cout << " Midpoint between ( " << x1 << " , " << y1 << " ) "
	     << " and ( " << x2 << " , " << y2 << " ) is ( "
         << (float)(x1+x2)/2 << " , " << (float) (y1 +y2)/2 << " ) "<<endl;	
	
	
	
}
