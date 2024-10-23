#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void Fibo()
{
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	int f0 = 1;
	int f1 = 2;
	int f2 = 0;
	while(f2 < 1000)
	{
		f2 = f0+f1;
		v.push_back(f2);
		f0 = f1;
		f1 = f2;
	}
}
int main()
{
	int t;
	cin>> t;
	Fibo();
	while(t--)
	{
		int n;
		cin>> n;
		int a[n];
		for(int i = 0; i < n ;i++)
		{
			cin>> a[i];
		}
		for(int i = 0; i < n;i++)
		{
			for(int j = 0; j < v.size(); j++)
			{
				if(a[i] == v[j]) cout<< a[i] << " ";
			}		
		}
		cout<< endl;
	}
}
