#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>> n >> m;
	vector<vector<long long> > a(2*n,vector<long long>(2*n));
	for(int i = 0; i < n ;i++)
	{
		for(int j = 0; j < n ;j++)
		{
			cin>> a[i][j];
			a[i][(2*n)-1-j]=a[i][j];
		}
	}
	for(int i = 0; i < 2*n;i++)
	{
		for(int j = 0; j < n; j++)
		{
			a[(2*n)-1-j][i]=a[j][i];
		}
	}
	int x,y;
	cin>> x >> y;
	while(x > (2*n))
	{
		x -= 2*n;
	}
	while(y > (2*n))
	{
		y -= 2*n;
	}
	cout<< a[x-1][y-1];
}
