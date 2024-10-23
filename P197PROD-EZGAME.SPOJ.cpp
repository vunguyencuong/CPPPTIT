#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>> t;
	while(t--)
	{
		int n,m;
		cin>> n >> m;
		int a[n] ={};
		int b[m]={};
		for(int i = 0; i < n;i++) cin>> a[i];
		for(int i = 0; i < m;i++) cin>> b[i];
		if(n > m) cout<< "No";
		else cout<< "Yes";
		cout<< endl;
	}
}
