#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>> n;
	int a[n]={};
	for(int i = 0; i < n ;i++)
	{
		cin>> a[i];
	}
	int count = 0;
	int b[1000]={};
	int c = 0;
	for(int i = 0; i < n ;i++)
	{
		if(a[i] <= a[i+1]) count++;
		else
		{
			b[c] = count;
			c++;
			count = 0;
		}
	}
	int max = b[0];
	for(int i = 0; i < c ;i++)
	{
		if(b[i] > max)
		{
			max  = b[i];
		}
	}
	cout<< max+1 << endl;
	
	
}
