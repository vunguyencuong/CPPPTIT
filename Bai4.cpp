#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n;
		vector<int> a(n+1);
		for(int i = 0; i < n; i++) cin>> a[i];
		sort(a.begin(),a.end());
		int min = 1e9;
		for(int i = 0; i < n-1; i++)
		{
			if(min > a[i+1]-a[i]) min = a[i+1]-a[i];
		}
		cout<< min << endl;
	}
}