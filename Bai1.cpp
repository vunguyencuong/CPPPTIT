#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m; cin>> n >> m;
	int ds[505]={};
	int ts[15]={};
	for(int i = 1; i <= n; i++)
	{
		cin>> ds[i];
		ts[ds[i]]++;
	}
	int max = 0;
	int max2 = 0;
	for(int i = 1; i <= m; i++)
	{
		if(ts[i] > max)
		{
			max2 = max;
			max = ts[i];
		}
		if(ts[i] < max && ts[i] > max2) max2 = ts[i];
	}
	if(max2 == 0) cout << "NONE";
	else{
		for(int i= 1 ;i <= m; i++)
		{
			if(max2 == ts[i])
			{
				cout<< i;
				break;
			}
		}
	}
}