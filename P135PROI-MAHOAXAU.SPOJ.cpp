#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		int len = s.length();
		int tanso[100000]={};
		for(int i = 'a'-'0'; i <= 'z'-'0'; i++)
		{
			tanso[i] = 0;
		}
		for(int i = 0; i < len; i++)
		{
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a'-'A';
			if(s[i] != ' ')
			{
				int x = s[i] - '0';
				tanso[x]++;
			}
		}
		int dem = 0;
		for(int i = 'a'-'0'; i <= 'z'-'0';i++)
		{
			//cout<< tanso[i];
			if(tanso[i] > 1)
			{
				dem += tanso[i];
				tanso[i] = 1;
			}
			
		}
		cout<< dem << " ";
		for(int i = 0; i< len; i++)
		{
			if(tanso[s[i]-'0'] >= 1 && s[i] != ' ')
			{
				cout<< s[i];
				tanso[s[i]-'0'] = 0;
			}
		}
		cout<< endl;	
	}
	
	
	
	return 0;
}
