#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	int count = 0;
	int len = s.length();
	int a[10000]={};
	for(int i = 0; i < len; i++)
	{
	//	cout<< s[i];
		int x = s[i] -'0';
	//	cout<< x;
		a[x]++;
	}
	for(int i = 0; i < 10000; i++)
	{
		if(a[i] >= 1) count++;
	}
	if(count % 2 == 0) cout<< "CHAT WITH HER!";
	else cout<< "IGNORE HIM!";
	return 0;
}
