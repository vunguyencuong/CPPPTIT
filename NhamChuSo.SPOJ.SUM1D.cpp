#include<bits/stdc++.h>
using namespace std;

int number(int m , int a)
{
	int x , y , z;
	y = 1e6;
	x = m;
	int re_m = 0;
	
	while(y)
	{
		z = x/y;
		x = x- z*y;
		if(z == a) z = 11 - a;
		re_m = re_m*10 + z;
		y /= 10;
	}
	return re_m;
}

int main()
{
	int m,n;
	cin>> m >> n ;
	int min , max;
	min = number(m,6) + number(n,6);
	max = number(m,5) + number(n,5);
	cout<< min << " " << max << endl;
	
}
