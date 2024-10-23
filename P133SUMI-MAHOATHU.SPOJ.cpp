#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	int len = s.length();
	int n,m;
	for(int i = sqrt(len); i >= 1; i--)
	{
		if(len % i == 0)
		{
			n = i;
			m = len/i;
			break;
		}
	}
	char a[n+1][m+1]={};
	int p = 0;
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n ;j++)
		{
			a[j][i]= s[p];
			p++;
		}
	}
	for(int i = 1; i <= n ;i++)
	{
		for(int j = 1; j <= m ;j++)
		{
			cout<< a[i][j];
		}
	}
	return 0;
}
