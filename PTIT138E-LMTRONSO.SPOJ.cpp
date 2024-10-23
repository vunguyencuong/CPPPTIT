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
		int len = s.size();
		for(int i = len; i> 0; i--)
		{
			if(s[i]-'0' >= 5)
			{
				s[i] = '0';
				s[i-1]++;
			}
			else s[i] = '0';
		}
		if(s[0]-'0' >= 9)
		{
			s[0]= '0';
			s = '1'+s;
		}
		cout<< s << endl;
	}
}
