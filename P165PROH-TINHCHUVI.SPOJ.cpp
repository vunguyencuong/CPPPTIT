#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll a,b,c;
		cin>> a >> b >> c;
		ll p = sqrt(a*b*c);
		ll x = p/a;
		ll y = p/b;
		ll z = p/c;
		ll P = (x+y)*4+4*z;
		cout<< P << endl;
	}
}
