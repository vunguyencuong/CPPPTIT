#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,m;
	cin>> n >> m;
	int a[m]={};
	for(int i = 1 ;i<= m ;i++) cin>> a[i];
	sort(a+1,a+m+1);
	int result = 10000;
	for(int i = 1; i <= m-n+1; i++)
	{
		if(a[i+n-1] - a[i] < result)
		{
			result = a[i+n-1] - a[i];
		}
	}
	cout<< result;
}
