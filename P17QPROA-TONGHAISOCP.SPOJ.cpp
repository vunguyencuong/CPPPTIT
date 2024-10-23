#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int Cp(ll n)
{
	if((int)sqrt(n) == sqrt(n)) return 1;
	else return 0;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll n;
		cin>> n;
		int count = 0;
		for(int i = 0; i <= sqrt(n)/2+1; i++)
		{
			if(Cp(n-i*i) == 1) count++;
		}		
		cout<< count << endl;
	}
}
