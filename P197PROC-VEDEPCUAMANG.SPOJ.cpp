#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>> n;
	vector<ll> v;
	for(int i = 0 ; i< n ;i++)
	{
		ll x;
		cin>> x;
		v.push_back(x);
	}
	ll max = 0, sum = 0;
	for(int i = 0; i < n;i++)
	{
		sum += v[i];
		if(max < sum) max = sum;
		if(sum < 0) sum = 0;
	}
	cout<< max << endl;
	
	
}
