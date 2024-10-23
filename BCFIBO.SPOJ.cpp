#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>> n;
	long long a =1e9+7;
	int s[1000000]; //devC ko nhan 1e6 nen cu dem di nop di
	s[0] = 0;
	s[1] = 1;
	for(int i = 2; i <= 1000000;i++)
	{
		s[i] =(s[i-1]+s[i-2]) % a;
	}
	cout<< s[n];
	return 0;
}
