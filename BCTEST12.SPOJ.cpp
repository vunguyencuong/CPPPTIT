#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	string s1;
	for(int i = 0; i < s.size();i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y'&& s[i] !='e'&& s[i] != 'u'&& s[i] != 'i')
		{
			s1.push_back(s[i]);
		}	
	}
	for(int i = 0; i < s1.size();i++)
	{
		cout<< "." << s1[i];
	}
	
}
