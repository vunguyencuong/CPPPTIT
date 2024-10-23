#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>> n;
	int l[n];
	int r[n];
	for(int i = 0; i < n ;i++)
	{
		cin>> l[i] >> r[i];
	}
	int lmin = 1000;
	int rmax = 0;
	int index1 = 0;
	int check = 0;
	for(int i = 0; i < n;i++)
	{
		if(lmin > l[i])
		{
			lmin = l[i];
		}
		if(rmax < r[i])
		{
			rmax = r[i];
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(l[i] == lmin && r[i] == rmax)
		{
			cout<< i;
			check = 1;
			break;
		}
	}
	if(check == 0) cout<< -1;
	return 0;
}
