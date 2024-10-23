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
	int n;
	cin>> n;
	long long  x[n+1] = {};
	for(int i = 0; i < n ;i++)
	{
		cin>> x[i];
	}	
	for(int i = 0; i < n;i++)
	{
		if(x[i] == 1) cout<< "NO" << endl;
		else
		{
		
	 		if(Cp(x[i]) == 1)
			{
		 		if(Check(sqrt(x[i])) == 1) cout<< "YES" << endl;
				else cout<< "NO" << endl;	
			}
			else cout<< "NO" << endl;	
	 	}
	}
	
	
	return 0;
}
