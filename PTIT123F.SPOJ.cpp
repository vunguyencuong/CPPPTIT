#include<bits/stdc++.h>
using namespace std;

int Drink(int n)
{
	int a[105] = {};
	for(int i = 1; i <=n ; i++)
	{
		if(i == 1)
		{
			for(int j = 1 ; j <= n; j++)
			{
				a[j] = 0;
			}
		}
		else
		{
			for(int j = 1; j <= n/i;j++)
			{
				if(a[i*j] == 0) a[i*j] = 1;
				else a[i*j] = 0;
			}
		}
	}
	int count = 0;
	for(int i = 1; i <= n ;i++)
	{
		if(a[i] == 0) count++;
	}
	return count;
}

int main()
{
	int T;
	cin>> T;
	while(T--)
	{
		int n;
		cin>> n;
		cout<< Drink(n) << endl;
	}
}
