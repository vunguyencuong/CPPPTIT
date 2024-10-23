#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll k;
	cin>> k;
	ll n = k+1;
	int a[10000]={};
	int m = 0;
	while(n)
	{
		a[m] = n%2;
		n /= 2;
		m++;
	}
	for(int i = m-2; i >= 0;i--)
	{
		if(a[i] == 0) cout<< "4";
		if(a[i] == 1) cout<< "7";
	}
}
