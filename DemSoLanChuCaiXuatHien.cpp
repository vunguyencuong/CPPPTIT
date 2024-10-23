#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int tanso[100000]={};
	int b = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
		tanso[s[i]]++;
	}
	for(int i = 0; i < s.size(); i++)
	{
		sort(s.begin(),s.end());
		if(s[i] == ' ') tanso[s[i]] = 0;
		if(tanso[s[i]] > 0)
		{
			cout<< s[i] << " " << tanso[s[i]] << endl;
			tanso[s[i]] = 0;
		}
	}
	
	
}
