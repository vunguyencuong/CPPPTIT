#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll n;
		cin>> n;
		int count = 0;
		for(int i = 1; i <= sqrt(n) ;i++)
		{
			if(n % i == 0)
			{
				if(i != n/i)
				{
					if(i % 2 == 0) count++;
					if((n/i)%2 == 0) count++;
				}
				else 
				{
					if(i%2==0) count++;
				}
			}
		}
		cout<< count << endl;
	}
}
