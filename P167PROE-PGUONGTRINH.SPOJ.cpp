#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		int count = 1;
		for(long long i = n+1; i <= 2*n-1; i++)
		{
			if((long long)(n*i)%(i-n) == 0) count+=2;
		}
		cout<< count << endl;
	}
}
