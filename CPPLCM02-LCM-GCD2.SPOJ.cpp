#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) 
{
	while(a > 0)
	{
		if(a < b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}
		a = a% b;
	}
	return b;
}
ll lcm(ll n)
{
	ll ans = 1;
	for(ll i = 1; i <= n;i++)
	{
		ans = (ans*i)/gcd(ans,i);
	}
	return ans;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll n;
		cin>> n;
		cout<< lcm(n) << endl;
	}
}
