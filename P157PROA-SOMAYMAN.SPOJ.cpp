#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		int a[1005]={0};
		int tanso[1005]={0};
		for(int i = 0; i < n;i++)
		{
			cin>> a[i];
			tanso[a[i]]++;
		}
		int max = 0;
		for(int i = 0; i < n; i++)
		{
			if(tanso[max] < tanso[a[i]])
			{
				max = a[i];
			}
			if(tanso[max] == tanso[a[i]])
			{
				if(max > a[i]) max = a[i];
			}
		}
		cout<< max << endl;
	}
}
