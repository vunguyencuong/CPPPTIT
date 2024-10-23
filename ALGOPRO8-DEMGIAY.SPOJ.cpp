#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>> n >> m;
	int day1 = 0;
	int day2 = 0;
	if(n < m && n >= 1)
	{
		day1 = n;
		day2 = (m-n)/2;
	}
	else if(n > m && m >= 1)
	{
		day1 = m;
		day2 = (n-m)/2;
	}
	else if(n == m)
	{
		day1 = n;
		day2 = 0;
	}
	cout<< day1 << " " << day2;
}
