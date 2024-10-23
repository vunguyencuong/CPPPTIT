#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll x,y;
	cin>> x >> y;
	ll n;
	cin>> n;
	int k = 2;
	ll f3 = 0;
	while(k < n)
	{
		f3 = y-x;
		x = y;
		y = f3;
		k++;
	}
	cout<< f3;
}
