#include<bits/stdc++.h>
using namespace std;
int n;
int check[50]={0};
int a[50]={};
void Cout()
{
	for(int i = 1; i <= n ;i++)
	{
		cout<< a[i];
	}
	cout<< " ";
}
void Code(int k)
{
	for(int i = 1 ;i <= n ;i++)
	{
		if(check[i] == 0)
		{
			a[k] = i;
			check[i] = 1;
			if(k == n) Cout();
			else
			{
				Code(k+1);
			}
			check[i] = 0;
		}
	}
}
		
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		cin>> n;
		Code(1);
	}
}
