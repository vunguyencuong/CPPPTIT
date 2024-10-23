#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[3*n] ={};
	vector<int> v;
	for(int i = 1; i <= 3*n;i++)
	{
		cin>> a[i];
	}
	for(int i = 1; i <= 3*n ;i++)
	{
		if(i % 3 == 0)
		{
			v.push_back(a[i] + a[i-1]*60 + a[i-2]*3600);
		}
	}
	sort(v.begin(),v.end());
	for(int i = 0;i < v.size(); i++)
	{
		cout<< (int)v[i]/3600 << " " << (int)(v[i]-3600*((int)v[i]/3600))/60 << " " << v[i] - ((int)v[i]/3600)*3600 - ((int)(v[i]-3600*((int)v[i]/3600))/60)*60 << endl;
	}
	
	
}
