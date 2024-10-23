#include<bits/stdc++.h>
using namespace std;

struct data
{
	string s;
} typedef data;

bool cmp(data a, data b)
{
	if((a.s+b.s) < (b.s+a.s)) return 1;
	else return 0;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int m;
		cin>> m;
		data a[m];
		for(int i = 0; i < m ;i++)
		{
			cin>> a[i].s;
		}
		sort(a.begin(),a.end(),cmp);
		
	}
}
