#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[n]={};
	for(int i = 0; i< n;i++)
	{
		cin>> a[i];
	}
	long long ans = 0;
	int k = 0;
	for(int i = 1; i < n;i++)
	{
		k += a[i-1];
		ans+= k*a[i];
	}
	cout<< ans;
}
