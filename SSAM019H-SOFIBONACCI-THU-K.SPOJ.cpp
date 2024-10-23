#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll n;
		cin>> n;
		ll k = 1;
		int f0 = 0;
		int f1= 1;
		ll f2 =0;
		ll Mod = 1e9+7;
		while(k < n)
		{
			f2 = (f0+f1)% Mod;
			f0 = f1;
			f1 = f2;
			k++;
		}
		cout<< f2 << endl;
	}
}
