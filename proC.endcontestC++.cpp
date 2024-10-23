#include<bits/stdc++.h>

using namespace std;
vector<int> Snt(1e7,0);
vector<int> C_Snt(1e7,0);
void Count(long long n)
{
	for(int i = 2; i <= n ;i++)
	{
		if(Snt[i] == 0)
		{
			for(int j = i; j <= n; j += i)
			{
				Snt[j] = 1;
				C_Snt[j]++;
			}
		}
	}
	for(int i = 1; i <=n; i++)
	{
		C_Snt[i] += C_Snt[i-1];
	}
}
int main()
{
	int T; cin>> T;
	Count(1e7+10);
	while(T--)
	{
		int l,r;
		cin>> l >> r;
		cout<< C_Snt[r] - C_Snt[l-1] << endl;
	}
	
	return 0;
}
