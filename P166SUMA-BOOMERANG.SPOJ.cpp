#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5005]={0};
	int n;
	cin>> n;
	int x;
	for(int i = 0; i < n;i++)
	{
		cin>>x;
		a[x] = 1; 
	}
	int count = 0;
	for(int i = 1; i <= n ;i++)
	{
		if(a[i] == 0) count++;
	}
	cout<< count << endl;
}
