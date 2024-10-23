#include<bits/stdc++.h>
using namespace std;


int main()
{
	int y,k,n;
	cin>> y >> k >> n;
	int a[1000]={};
	int b = 0;
	for(int i = y ; i <= n ;i++)
	{
		if(i % k == 0)
		{
			a[b] = i;
			b++;
		}
	}
	for(int i = 0; i < b ;i++)
	{
		if(a[i] - y >= 1)
		{
			cout<< a[i]-y << " ";
		}
		else cout<< -1;
	}
}
