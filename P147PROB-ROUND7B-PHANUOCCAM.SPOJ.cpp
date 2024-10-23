#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[n]={};
	for(int i = 0; i < n;i++)
	{
		cin>> a[i];
	}
	double m = 0;
	for(int i = 0; i < n;i++)
	{
		m += (double)a[i]/n;
	}
	cout<< setprecision(12) << fixed << m;
}
