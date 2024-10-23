#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>> n;
	string s;
	cin>> s;
	int a[n+1]={};
	int check = 1;
	for(int i = n-1 ;i >= 0 ;i--)
	{
		if(s[i] != '4' && s[i] != '7')
		{
			check = 0;
			break;
		}
	}
	if(check == 0) cout<< "NO";
	else
	{
		int sum1= 0;
		int sum2 = 0;
		for(int i = 0 ;i < n/2;i++)
		{
			sum1 += a[i];
		}
		for(int i = n/2; i < n ;i++)
		{
			sum2 += a[i];
		}
		if(sum1 == sum2) cout<< "YES";
		else cout<< "NO";
	}
}
