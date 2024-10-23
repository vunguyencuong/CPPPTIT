#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		ll a[n]={};
		int check = 0;
		for(int i = 0; i < n;i++)
		{
			cin>> a[i];
		}
		
		for(int i = 0; i < n ;i++)
		{
			for(int j = i+1; j <n ;j++)
			{
				if(a[i] == a[j])
				{
					check = 1;
					cout<< a[i] << endl;
					break;
				}
			}
			if(check == 1) break;
		}
		if(check == 0) cout<< "NO" << endl;
	}
}
