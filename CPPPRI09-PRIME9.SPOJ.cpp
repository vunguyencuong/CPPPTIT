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
		for(int i = 2; i*i <= n; i++)
		{
			if(n % i == 0)
			{
				int count = 0;
				while(n % i == 0)
				{
					count++;
					n /= i;
				}
				cout<< i << " " << count << " ";
			}

		}
		if(n > 1) cout<< n << " " << 1;
		cout<< endl;
	}
}
