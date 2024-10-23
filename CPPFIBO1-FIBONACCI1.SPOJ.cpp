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
		int mod = 1e9+7;
		int f0 = 0;
		int f1 = 1;
		int f2;
		int k = 0;
		while(k < n)
		{
			f2 = (f0+f1)%mod;
			f0 = f1%mod;
			f1 = f2%mod;
			k++;
		}
		cout<< f0 << endl;
	}
}
