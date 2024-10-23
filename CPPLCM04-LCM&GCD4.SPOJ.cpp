#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll GCD(ll a,ll b)
{
	while(a > 0)
	{
		if(a < b)
		{
			int tmp = a;
			a = b;
			b =tmp;
		}
		a = a%b;
	}
	return b;
}
ll Reduce(ll a, string b)
{
	ll mod = 0;
	for(int i = 0; i < b.size();i++)
	{
		mod = (mod*10 + b[i]-'0')%a;
	}	
	return mod;
}
ll FindAns(ll a, string b)
{
	ll num  = Reduce(a,b);
	return GCD(a,num);
}
int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		ll a;
		string b;
		cin>> a >> b;
		if(a == 0) cout<< b << endl;
		cout<< FindAns(a,b) << endl;
	}
}
