#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	for(int i = 0; i < 3 ;i++)
	{
		int n;
		cin>> n;
		a.push_back(n);
	}
	sort(a.begin(),a.end());
	int d = 0;
	int m = a[1] - a[0];
	int n = a[2] - a[1];
	if(m > n) cout<< a[0] + n;
	else if(m < n) cout<< a[1] + m;
	else if(m == n) cout<< a[2] + n; 
}
