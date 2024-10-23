#include<bits/stdc++.h>

using namespace std;

bool snt(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return 1;
}
int unt(int n)
{
	if(n==1) return 1;
	else if(n%2==0) return 2;
	else if(snt(n)==1) return n;
	else
	{
		for(int i=3;i<=sqrt(n);i++)
		{
			if(snt(i)==1&&n%i==0) return i;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
			cout<<unt(i)<<" ";
		cout<<endl;
	}
	return 0;
}
