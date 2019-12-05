#include <iostream>
using namespace std;


int main()
{
	int input1 = 0;
	int input2 = 0;
	cin >> input1;
	cin >> input2;
	const int ROW=input2;
	const int COL=input1;
	int M[ROW][COL];
     int n,c,r;
	n=0;
	for(c=COL-1; c>=0; c--)
		for(r=0; r<ROW; r++)
		{
			n++;
			M[r][c]=n;
		}
	for(r=0; r<ROW; r++)
	{
		for(c=0; c<COL; c++)
			cout << M[r][c] << ' ';
		cout << endl;
	}
	return 0;
}



