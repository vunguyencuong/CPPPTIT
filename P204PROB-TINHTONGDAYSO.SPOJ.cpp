#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin>> n;
	if(n % 2 == 0)
	{
		ll sumC = (n/2)*(n/2+1);
		ll sumL = (n/2)*(n/2);
		cout<< sumC-sumL << endl; 
	}
	else 
	{
		ll sumC = ((n-1)/2)*((n-1)/2+1);
		ll sumL = ((n+1)/2)*((n+1)/2);
		cout<< sumC - sumL << endl;
	}
}
