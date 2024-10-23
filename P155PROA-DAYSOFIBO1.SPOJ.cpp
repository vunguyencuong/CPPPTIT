#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Fibo(ll a, ll n)
{
	ll f1 = 1;
	ll f2 = 1;
	ll f3 = 0;
	ll k = 2;
	ll sum = 2*a;
	while(k < n)
	{
		f3 = f1+f2;
		sum += a*f3;
		f1 = f2;
		f2 = f3;
		k++;
	} 
	return sum;
}

int main()
{
	ll a1, n;
	cin>> a1 >> n;
	cout<< Fibo(a1,n);

}
