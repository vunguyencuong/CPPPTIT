#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cP(ll x)
{
	ll n=sqrt(x);
	if(n*n==x) return 1;
	else return 0;
}

ll check(ll x)
{
	for(ll i = 1; i*i<=x;i++)
	{
		if(x % i == 0)
		{
			if(cP(i) == 1 && i > 1) return 0;
			if(cP(x/i) == 1 && x/i > 1) return 0;
		}
	}
	return 1;
}

int main()
{
	ll n;
	cin>> n;
	vector<ll> a;
	for(int i = 1; i <= sqrt(n);i++ )
	{
		if(n % i == 0)
		{
			if(i!=n/i)
            {
                a.push_back(i);
                a.push_back(n/i);
            }
            else
            {
                a.push_back(i);
            }
		}
	}
	sort(a.begin(),a.end());
	for(int i = a.size()-1; i >=0; i--)
	{
	//	cout<< a[i] << " " ;
	//	cout<< check(a[i]) << " ";
		if(check(a[i]) == 1)
		{
			cout<< a[i] ;
			break;
		}
		
	}
	return 0;
}
