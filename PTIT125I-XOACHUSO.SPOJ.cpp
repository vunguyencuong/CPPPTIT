#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,k;
	cin>> N >> k;
	vector<int> a(N);
	for(int i = 0; i < N; i++)
	{
		int x;
		cin>> x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	for(int i = N; i>= 0;i--)
	{
		if(i >= k) cout<< a[i];
	}
	
	
	
	return 0;
}
