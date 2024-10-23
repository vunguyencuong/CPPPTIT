#include<bits/stdc++.h>
using namespace std;

struct Time
{
	int s;
	int f;
};
bool cmp(Time a , Time b)
{
	if(a.f > b.f) return 0;
	return 1;
}

int main()
{
	int n ;
	cin>> n;
	vector<Time> a(n);
	for(int i = 0; i < n ;i++)
	{
		cin>> a[i].s >> a[i].f;
	}
	sort(a.begin(),a.end(),cmp);
	int count = 0;
	int x = a[0].s;
	for(int i = 0; i < n ;i++)
	{
		if(x <= a[i].s)
		{
			count++;
			x = a[i].f;
		}
	}
	cout<< count;
}
