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
		int count =0;
		int a[n]={};
		int sum = 0;
		for(int i =1 ;i<= n ;i++)
		{
			cin>> a[i];
			sum += a[i];
		}
		if(sum % 2 != 0) cout<< "YES" << endl;
		else
		{
			for(int i = 1; i<= n;i++)
			{
				if(a[i] % 2 != 0)
				{
					count++;
				}
			}
			if(count % 2 == 0 && count > 0 && count < n) cout<< "YES" << endl;
			else cout<< "NO" << endl;
		}
	}
}
