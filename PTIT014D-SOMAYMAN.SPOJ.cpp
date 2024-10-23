#include<bits/stdc++.h>
using namespace std;

long long Lucky(long long n)
{
	if(n < 10) return n;
	int tong = 0;
	while(n > 0)
	{
		tong += n%10;
		n /= 10;
	}
//	cerr << tong << endl;
	return Lucky(tong);
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		string s;
		cin>> s;
		int sum = 0;
		for(int i = 0; i < s.size(); i++)
		{
			sum += s[i]-'0';
		}
	//	int sum = 888;
		if(Lucky(sum) == 9) cout<< 1 << endl;
		else cout<< 0 << endl;
	}
	
	
	
	return 0;
	
}
