#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Div(ll n)
{
	ll max = 0;
	while(n % 2 == 0)
	{
		max = 2;
		n/=2;
	}
	for(int i = 3; i <=sqrt(n); i+=2)
	{
		if(n%i ==0)
		{
			max = i;
			while(n%i ==0)
			{
				n /= i;
			}
		}
	}
	if(n > 1) max = n;
	return max;
}


int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll n;
		cin>> n;
		cout<< Div(n)<< endl;
		
	}
	
}
