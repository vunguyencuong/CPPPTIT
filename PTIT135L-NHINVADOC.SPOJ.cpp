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
		int count;
		int len = s.length();
		for(int i=0; i < len ; )
		{
			count = 1;
			for(int j = i+1; j < len;j++)
			{
				if(s[i] == s[j])
				{
					count++;
				}
				else break;
			}
			cout<< count << s[i];
			i = i + count;
		}
		cout<< endl;
	}
}
