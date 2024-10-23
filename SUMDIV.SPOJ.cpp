#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long n;
		cin>> n;
		long long ans = 0;
		for(long long i = 1; i <= sqrt(n); i++)
		{
			if(n % i == 0)
			{
				ans += i + n/i;
			}
		}
		if((long long) sqrt(n) == sqrt(n)) ans = ans - sqrt(n);
		cout<< ans << endl;
	}
}
