#include<bits/stdc++.h>
using namespace std;
int Bom(vector<vector<char> > a, int x, int y)
{
	int count = 0;
	for(int i = x-1; i <= x+1 ;i++)
	{
		if(i >= 0 && i < a.size())
		{
			for(int j = y-1; j <= y+1 ;j++)
			{
				if(j >= 0 && j < a[i].size())
				{
					if(a[i][j] == '*') count++;
				}
			}
		}
	}
	return count;
}


int main()
{
	while(true)
	{
	
		int n,m;
		cin>> n >> m;
		if(n == 0 && m == 0) return 0;
		vector<vector<char> > a(n,vector<char>(m));
		for(int i = 0; i < n;i++)
		{
			for(int j = 0; j <m ;j++)
			{
				cin>> a[i][j];
			}
		}
		for(int i = 0; i < n;i++)
		{
			for(int j = 0; j < m;j++)
			{
				if(a[i][j] == '.')
				{
					a[i][j] = (char) Bom(a,i,j) + '0';
				}
			}
		}
		for(int i = 0; i < n ;i++)
		{
			for(int j = 0; j < m; j++ )
			{
				cout<< a[i][j];
			}
			cout<< endl;
		}
	}
	
	return 0;
}
