#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true)
	{
		int n;
		cin>> n;
		if(n == 0) return 0;
		int a[30]={};
		for(int i = 0; i < n ;i++)
		{
			cin>> a[i];
		}
		int count = 0;
		int num = 1000;
		while(num--)
		{
			int a_old = a[0];
			for(int i = 0; i < n; i++)
			{
				a[i] = abs(a[i]-a[i+1]);
				if(i == n-1) a[i] = abs(a[n-1]-a_old);
			}
			count++;
		}
		cout<< count << endl;
	}
}
