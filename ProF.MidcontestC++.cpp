#include<bits/stdc++.h>
using namespace std;
bool snt(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i * i <= n; i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
long long tcs(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
vector<long long> f;
long long dequy(int n)
{
	if(f[n] != 0 ) return f[n];
	if(snt(n)) return f[n]=tcs(n);
	f[n] = 1;
	for(int i = 2; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			f[n] *= dequy(i);
			if(n/i != i) f[n] *= dequy(n/i);
		}
	}
	return f[n];
}
int main()
{
	int n;
	cin>> n;
	f.resize(n+1,0);
	f[1] = 1;
	cout<< dequy(n);
}
