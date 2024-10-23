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
		int count1 = 0;
		int count2 = 0;
		for(int i = 2; i*i <= n ;i++)
		{
			if(n % i == 0)
			{
				count1++;
				while(n % i == 0)
				{
					count2++;
					n /= i;
				}
			}
		}
		if(n > 1)
		{
			count1++;
			count2++;
		}
		if(count1 == count2 && count1 == 3) cout<< 1 << endl;
		else cout<< 0 << endl;
	}
}
