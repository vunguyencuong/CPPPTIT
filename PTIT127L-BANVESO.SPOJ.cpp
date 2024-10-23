#include<bits/stdc++.h>
using namespace std;
void mang(int a[])
{
	for(int i = 1; i<= 49; i++)
	{
		a[i] = 0;
	}
}
int check(int a[])
{
	for(int i = 1; i<= 49;i++)
	{
		if(a[i] == 0) return 0;
	}
	return 1;
}
int main()
{
	int tanso[102]={};
	while(true)
	{
		int n;
		cin>> n;
		if(n == 0) return 0;
		mang(tanso);
		for(int i = 1; i<= n;i++)
		{
			for(int j = 1; j <= 6;j++)
			{
				long long x;
				cin>> x;
				if(x >= 1 && x <= 49)
				{
					tanso[x]++;
				}
			}
		}
		if(check(tanso) == 1) cout<< "Yes" << endl;
		else cout<< "No" << endl;
	}
}
