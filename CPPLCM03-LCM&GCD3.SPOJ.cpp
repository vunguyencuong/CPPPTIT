#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll Mod = 1e9+7;
ll gcd(ll a, ll b)
{
	if(b == 0) return a;
	return gcd(b,a%b);
}

ll pow(ll a, ll b)
{
	ll pro = 1;
	while(b)
	{
		if(b%2 != 0) pro = pro*a&Mod;
		b /= 2;
		a = a*a%Mod;
	}
	return pro;
}

ll powArr(vector<ll> a, ll b)
{
	ll x = a[0];
	for(ll i = 1; i < a.size(); i++)
	{
		x = x*a[i]%Mod;
	}
	return pow(x,b);
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll n;
		cin>> n;
		if(n == 1)
		{
			int x; cin>> x;
			cout<< pow(x,x) << endl;
		}
		else
		{
			vector<ll> a(n);
			for(int i = 0; i < n ;i++)
			{
				cin>> a[i];
			}
			int gcdArr = a[0];
			for(int i = 1; i < n ;i++)
			{
				gcdArr = gcd(gcdArr,a[i]);
			}
			cout<< powArr(a,gcdArr) << endl;
			
		}
	}
	
	
}
