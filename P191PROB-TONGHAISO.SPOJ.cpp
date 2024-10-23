#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>> n >> m;
	int a[5005]={};
	for(int i = 1; i <= n;i++)
	{
		cin>> a[i];
	}
	int count = 0;
	for(int i = 1; i < n;i++)
	{
		for(int j = i+1; j <= n;j++)
		{
			if(a[i]+a[j] == m) count++;
		}
	}
	cout<< count << endl;
}
