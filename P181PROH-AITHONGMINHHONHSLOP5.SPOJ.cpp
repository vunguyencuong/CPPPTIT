#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b;
	cin>> a >> b;
	if(a < b) cout<< "0";
	else if(a == b) cout<< "infinity";
	else
	{
		int c = a-b;
		int count = 0;
		for(int i = 1; i <= sqrt(c);i++)
		{
			if(c % i == 0)
			{
				if(i != c/i)
				{
					if(i>b)count++;
					if(c/i>b)count++;
				}
				else
				{
					if(i>b)count++;
				}
			}
		}
		cout<< count << endl;
	}
}
