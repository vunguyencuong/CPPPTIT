#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>> n;
	ll b[n+5] ={};
	for(int i = 1; i <= n;i++)
	{
		cin>> b[i];
	}
	for(int i = 1; i <= n ;i++)
	{
		cout<< i*b[i]-(i-1)*b[i-1] << " ";
	}
}
