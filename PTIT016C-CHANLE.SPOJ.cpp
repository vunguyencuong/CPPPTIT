#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		string s;
		cin>> s;
		int checkl = 1;
		int checkc = 1;
		int len = s.length()-1;
		for(int i = 0 ; i <= len ;i++)
		{
			if((i+1) % 2 != 0)
			{
				if((s[i]-'0')%2 == 0)
				{
					checkl = 0;
					break;
				} 
			}
			if((i+1)% 2 == 0)
			{
				if((s[i]-'0')%2 != 0)
				{
					checkc = 0;
					break;
				}
			}
		}
		if(checkl == 1 && checkc == 1) cout<< "YES" << endl;
		else cout<< "NO" << endl;
	}
}
