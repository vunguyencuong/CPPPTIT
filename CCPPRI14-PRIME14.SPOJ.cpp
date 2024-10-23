#include<bits/stdc++.h>
using namespace std;

int Cp(long long n)
{
	long long m = sqrt(n);
	if(m == sqrt(n)) return 1;
	else return 0;
}


int Check(long long n)
{
	int count = 0;
	for(int i = 2; i*i <= n ;i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}


int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		for(int i = 2; i <= n ;i++)
		{
			if(Cp(i) == 1)
			{
				if(Check(sqrt(i)) == 1) cout<< i << " ";
			}
		}
		cout<< endl;
	}
	 
	
}
