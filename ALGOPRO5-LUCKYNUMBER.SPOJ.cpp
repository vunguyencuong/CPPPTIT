#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>> n;
	long long ans=1;
	for(int i = 1; i <= n+1; i++)
	{
		ans *= 2;
	}
	cout<< ans-2;
	
	return 0;
}
