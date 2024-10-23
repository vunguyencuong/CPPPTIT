#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n,T;
		cin>> n >> T;
		int a[n+1]={};
		for(int i = 0; i < n;i++)
		{
			cin>> a[i];
		}
		int sum = 0;
		int count = 0;
		for(int i = 0; i < n;i++)
		{
			sum += a[i];
			count++;
			if(sum > T)
			{
				count--;
				break;
			}
		}
		cout<< count << endl;
	}
	
	
	
	
	return 0;
}
