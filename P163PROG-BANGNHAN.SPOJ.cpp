#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,x;
	cin>> n >> x;
	ll count = 0;
	for(ll i = 1; i <= sqrt(x);i++)
	{
		if(x % i == 0)
		{
			if(i != x/i)
			{
				if( i <= n && (x/i) <= n) count += 2;
			}
			else 
			{
				if( i <= n) count++;
			}
		}
	}
	cout<< count << endl;
}
