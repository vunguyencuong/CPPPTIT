#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>> s)
	{
		int count = 0;
		int tanso[26] = {0};
		for(int i = 0; i<s.length();i++)
		{
			tanso[s[i]-'a']++;
		}
		for(int i = 0; i< 26 ;i++)
		{
			if(tanso[i]%2 == 1) count++;
		}
		if(count%2 == 1 || count < 2) cout<< "First" << endl;
		else cout<< "Second" << endl;
	}
}
