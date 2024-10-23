#include<bits/stdc++.h>
using namespace std;
int Snt(int n)
{
	if(n < 2) return 0;
	for(int i = 2 ; i*i <= n;i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		vector<int> v;
		for(int i=2; i<= n ;i++)
		{
			if(Snt(i) == 1) v.push_back(i);
		}
		for(int i = 0; i < v.size();i++)
		{
			if(Snt(n-v[i])== 1)
			{
				cout<< v[i] << " " << n-v[i];
				break;
			}
		}
		cout<< endl;
	}
}
