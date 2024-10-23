#include<bits/stdc++.h>
using namespace std;

int Snt(int n)
{
	for(int i = 2; i*i <= n ;i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int USnt(int n)
{
	int value = 0;
	for(int i = 3; i <= sqrt(n); i+=2)
	{
		if(n % i == 0)
		{
			value = i;
			break;
		}
	}
	return value;
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		for(int i = 1 ;i <= n;i++)
		{
			if(i == 1) cout<< 1 << " ";
			else if(i % 2 == 0) cout<< 2 << " ";
			else if(i% 2 != 0 && Snt(i) == 1) cout<< i << " ";
			else cout<< USnt(i) << " "; 
			
		}
		cout<< endl;
	}
}
