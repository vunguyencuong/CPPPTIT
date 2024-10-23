#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10000]={};
	int b[10000]={};
	int n;
	cin>> n;
	for(int i = 0; i< n;i++)
	{
		cin>> a[i];
	}
	b[0] = 1;
	int bmax;
	for(int i = 0; i<n; i++)
	{
		bmax = 0;
		for(int j = 0; j < i; j++)
		{
			if(a[i] > a[j])
			{
				if(b[j] > bmax)
				{
					bmax = b[j];
				}
			}
		}
		b[i] = bmax+1;
	}
	int max = 0;
	for(int i = 0; i<n; i++)
	{
		if(b[i] > max ) max = b[i];
	}
	cout<< max;
	return 0;
}
