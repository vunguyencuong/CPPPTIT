#include<bits/stdc++.h>
using namespace std;
long long UCLN(int a,int b)
{
	while(a > 0)
	{
		if(a < b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}
		a = a%b;
	}
	return b;
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		long long a,b;
		cin>> a >> b;
		long long c = a*b;
		cout<< (long long)c/UCLN(a,b) << " " << UCLN(a,b) << endl;
	}
}
