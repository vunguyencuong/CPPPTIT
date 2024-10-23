#include<bits/stdc++.h>
using namespace std;
int Count(long long n)
{
	int count = 0;
	long long m = sqrt(n);
	long long l,r;
	long long x,y;
	for(long long i = 2; i <= m;i++)
	{
		if(n % i == 0)
		{
			x = n/i;
			y = i;
			if((y+x-1)%2==0)
			{
				r = (y+x-1)/2;
				l = x-r;
				if(l >= 1 && r > l)
				{
					count++;
				}
			}
		}
	}
	return count;
}
int main()
{
	int t;
	cin>> t;
	int n ;
	long long X;
	while(t--)
	{
		cin>> n;
		cin>> X;
		cout<< n <<" " << Count(2*X) << endl;
	}
}
