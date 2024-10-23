#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>> n;
	vector<ll> a;
	for(ll i = 1; i <= n ;i++)
	{
		ll x;
		cin>> x;
		a.push_back(x);
	}
	ll count = 0;
	int l = 0;
	int r = n-1;	
	while(l < n, r >= 0)
	{
		if(a[l] == a[r])
		{
			l++;
			r--;
			if(l >= r) break;
		}
		else 
		{
			if(a[l] < a[r])
			{
				a[l+1] = a[l]+a[l+1];
				count++;
				l++;
				
			}
			else 
			{
				a[r-1] = a[r]+a[r-1];
				count++;
				r--;
			}
		}
	}
	cout<< count;
	return 0;
	
	
	
}
