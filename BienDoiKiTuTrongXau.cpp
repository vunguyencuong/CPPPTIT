#include<bits/stdc++.h>
using namespace std;
int snt(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	string s;
	getline(cin,s);
	for(int i = 0; i < s.size(); i++)
	{
		if(snt(i) == 1 && i >= 2) s[i] = '*';
	}
	cout<< s;
}
