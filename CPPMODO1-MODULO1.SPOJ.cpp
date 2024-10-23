#include<bits/stdc++.h>
using namespace std;
long long p =1e9+7;
long long Pow(long long x, long long y)
{
	if(y == 0) return 1;
	if(y == 1) return x;
	if(x == 0) return 1;
	if(y%2 == 0) return Pow(x*x%p,y/2)%p;
	else return x*Pow(x*x%p,y/2)%p; 
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long x,y;
		cin>> x >> y;
		cout<< Pow(x,y)<< endl;
	}
}
