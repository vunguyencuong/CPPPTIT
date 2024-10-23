#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n,p;
		cin>> n >> p;
		int count = 0;
		for(int i = 1; i <= n;i++)
		{
			int j = i;
			while(j % p == 0)
			{
				count++;
				j /= p;
			}
		}
		cout<< count<< endl;
	}
}
