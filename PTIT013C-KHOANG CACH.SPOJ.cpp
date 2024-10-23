#include<bits/stdc++.h>
using namespace std;

long long Math(long long x1, long long y1, long long x2, long long y2)
{
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
// dmin khi A B M thang hang
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int d = 0;
		long long x1,y1,x2,y2;
		cin>> x1 >> y1 >> x2 >> y2;
		if((y2 > 0 && y1 > 0) || (y1 < 0 && y2 < 0))
		{
			d = Math(x1,-y1,x2,y2);
		}
		else
		{
			d = Math(x1,y1,x2,y2);
		}
		cout<< d << endl;
	}
	
	
	
	
	return 0;
}
