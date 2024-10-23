#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	vector<int> a;
	vector<int> b(n,0);
	for(int i = 0;i< n;i++)
	{
		int x;
		cin>> x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	int count = 0;
	int sum = 0;
	b[0] = a[0];
	for(int i =1;i < n;i++)
	{
		b[i] = a[i]+b[i-1];
	}
	for(int i = 0;i< n;i++)
	{
		if(b[i] <= 300)
		{
			sum += b[i];
			count++;
		}
	}
	cout<< count << " " << sum;
}
