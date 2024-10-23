#include<bits/stdc++.h>
using namespace std;

int ucln(int a,int b)
{
	while(a > 0)
	{
		if(a < b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		a = a%b;	
	}
	return b;
}
int Snt(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i<= sqrt(n); i++)
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
		int x;
		cin>> x;
		int count = 0;
		for(int i = 1; i <= x;i++ )
		{
			if(ucln(i,x) == 1) count++;
		}
	//	cout<< count << endl;
	//	cout<< Snt(count) << endl;
		if(Snt(count) == 1) cout<< 1 << endl;
		else cout<< 0 << endl;
	}
	return 0;
}
