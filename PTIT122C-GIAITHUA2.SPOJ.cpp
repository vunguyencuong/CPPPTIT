#include<bits/stdc++.h>
using namespace std;

int Giaithua(int n)
{
	if(n == 0) return 0;
	int num = 1;
	for(int i = 2; i <= n;i++)
	{
		num *= i;
	}
	return num;
}


int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n,x;
		cin>> n >> x;
		vector<int> a;
		int count = 0;
		long long m = Giaithua(n);
		while(m > 0)
		{
			a.push_back(m%10);
			m /= 10;
		}
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] == x) count++;
		}
		cout<< count << endl;
	}
	return 0;
}
