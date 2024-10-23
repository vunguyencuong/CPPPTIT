#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,res = 0;
	int a[24][60];
	int n;
	cin>> n;
	for(int i = 0; i < 24;i++)
	{
		for(int j = 0; j < 60; j++)
		{
			a[i][j] = 0;
		}
	}
	for(int i = 0 ;i < n;i++)
	{
		cin>> x >> y;
		a[x][y]++;
		if(res < a[x][y]) res = a[x][y];
	}
	cout<< res;
}
