#include<bits/stdc++.h>
using namespace std;
int tanso[1000000]={0};
int main()
{
	int n,m;
	cin>> n >> m;
	vector<int> a;
	vector<int> b;
	for(int i = 0; i< n ;i++)
	{
		int x;
		cin>> x;
		a.push_back(x);
		tanso[x]++;
	}
	for(int i= 1; i<= 1e6+5; i++)
	{
		tanso[i]+= tanso[i-1];
	}
	for(int i = 0; i< m ;i++)
	{
		int y;
		cin>> y;
		b.push_back(y);
	}
	for(int i = 0; i< m ;i++)
	{
		cout<< tanso[b[i]] << endl;
	}
}
