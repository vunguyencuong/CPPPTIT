#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		vector<ll> v;
		for(int i = 0;i < 3;i++)
		{
			ll a;
			cin>> a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		cout<< v[2]-v[0] << endl;
	}
}
