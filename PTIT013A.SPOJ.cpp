#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>> T;
	vector<long long> a;
	for(int i = 0; i < T; i++)
	{
		long long x;
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0; i < T; i++)
	{
		if(a[i] % 100 == 86) cout<< 1 << endl;
		else cout<< 0 << endl;
	}
}
