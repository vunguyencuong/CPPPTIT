#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll repair(ll n)
{
	ll res = 0;
	ll i = 1;
	while(n > 0)
	{
		if(n % 10 > 0)
		{
			res += (n%10)*i;
			i *= 10; 
		}
		n /= 10;
	}
	return res;
}

int main()
{
	ll a, b;
	cin>> a >> b;
	ll c = a+b;
	ll m = repair(a);
	ll n = repair(b);
	ll p = repair(c);
	if(p == m+n) cout<< "YES" << endl;
	else cout<< "NO" << endl;
	//cout<< repair(c) << endl << m << " " << n;
}
