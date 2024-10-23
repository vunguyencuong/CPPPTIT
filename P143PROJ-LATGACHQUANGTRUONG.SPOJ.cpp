#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,a;
	cin>> n >> m >> a;
	long long x1,x2;
	if(n%a == 0)
	{
		x1 = n/a;
	}
	else x1 = n/a+1;
	if(m%a == 0)
	{
		x2 = m/a;
	}
	else x2 = m/a+1;
	cout<< x1*x2;
	
	return 0;
}
