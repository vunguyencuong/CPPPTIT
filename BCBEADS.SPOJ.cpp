#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>> n;
	int a[n] ={0};
	for(int i = 0; i < n ;i++)
	{
		cin>> a[i];
	}
	int count = 0;
	for(int i = n-1; i >= 0; i--)
	{
		if(a[i] != a[i-1] && (i-1) >= 0)
		{
			count++;
		}
	}
	cout<< count ;
}
