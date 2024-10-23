#include<bits/stdc++.h>
using namespace std;
int Giaithua(int n)
{
	int tich = 1;
	if(n == 1) return 1;
	else
	{
		for(int i = 2; i <= n;i++)
		{
			tich = tich* i;
		}
	}
	return tich;
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		int m = 0;
		int p = 1;
		while(n > 0)
		{
			m += (n%10)*Giaithua(p);
			n /= 10;
			p++;
		//	cout<< m << endl;
		}
		cout<< m << endl;
	}
}
