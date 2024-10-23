#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
int Luythua(long long a , long long b)
{
	if(b == 0) return 1;
	if(b % 2 == 0)
	{
		long long value = Luythua(a,b/2);
		return (value*value)%mod;
	}
	else
	{
		long long value = Luythua(a,b-1);
		return (value*a)%mod;
	}
}

int main()
{
	while(true)
	{
		long long c = 1e9+7;
		long long a,b;
		cin>> a >> b;
		if(a == 0 && b == 0) return 0;
		cout<< Luythua(a,b) << endl;
	}
	
	
	
	return 0;
}
