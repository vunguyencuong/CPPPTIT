#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>> a >> b >> c;
	int s[5][5];
	int t= 0;
	for(int i = 1; i <= 3;i++)
	{
		for(int j = 1; j <= 2 ;j++)
		{
			cin>> s[i][j];
		}
	}
	int d = s[3][2];
	int n[d];
	for(int i = 1; i <= d; i++)
	{
		n[i] = 0;
	}
	for(int i = s[1][1]; i < s[1][2]; i++)
	{
		n[i]++;
	}
	for(int i = s[2][1]; i < s[2][2];i++)
	{
		n[i]++;
	}
	for(int i = s[3][1]; i< s[3][2];i++)
	{
		n[i]++;
	}
	for(int i = 1; i <= d ;i++)
	{
		if(n[i] == 1) t += a;
		if(n[i] == 2) t += b*2;
		if(n[i] == 3) t += c*3;
	}
	cout<< t;
	return 0;
	
}
