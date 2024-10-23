#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[205]={};
	for(int i = 1; i <= n ;i++)
	{
		cin>> a[i];
	}
	int min = a[1];
	int max = a[1];
	int pMin = 0;
	int pMax = 0;
	for(int i = 1;i <= n ;i++)
	{
		if(min >= a[i])
		{
			min = a[i];
			pMin = i;
		}
		if(max < a[i])
		{
			max = a[i];
			pMax = i;
		}
	}
	if(pMax > pMin)
	{
		int tmp = pMax;
		pMax = pMin;
		pMin = tmp;
	}
	if(n-pMax > pMin-1) cout< n-pMax;
	else cout<< pMin-1;
}
