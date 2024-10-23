#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int main()
{
	
	int t;
	cin>> t;
	int a[12];
	while(t--)
	{
		string a,b,c;
		cin>> a >> b >> c;
		for(int i = 0; i < 10;i++)
		{
			a[i] = 0;
		}
		for(int i = 0; i < a.size(); i++)
		{
			int number = a[i] -'0';
			a[number]++;
		}
		for(int i = 0; i < b.size(); i++)
		{
			int number = b[i] -'0';
			a[number]++;
		}
		for(int i = 0; i < c.size(); i++)
		{
			int number = c[i] -'0';
			a[number]++;
		}	
		for(int i = 9; i >= 0 ;i--)
		{
			for(int j = 0; j < a[i];j++)
			{
				cout<< i;
			}
		}
		cout<< endl;
	}
	
	
	
	return 0;
}
