#include<bits/stdc++.h>
using namespace std;

long long Pow2(int n)
{
	long long ans1 = 1;
	for(int i = 1; i<= n ;i++)
	{
		ans1 = ans1* 2;
	}
	return ans1;
}

long long Pow3(int m)
{
	long long ans2 = 1;
	for(int i = 1 ; i<= m;i++)
	{
		ans2 = ans2 * 3;
	}
	return ans2;
}
int main()
{
	int n,m;
	cin>> n >> m;
	int p = 0;
	long long s = Pow2(n)+Pow3(m);
	while(s > 0)
	{
		p = s % 10;
		s /= 10;
	}
	cout<< p;
}
