#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>> s;
	int tanso[26]={0};
	int len = s.length()-1;
	for(int i = 0; i <= len;i++)
	{
		tanso[s[i]-'a']++;
	}
	int count = 0;
	for(int i = 0; i< 26 ;i++)
	{
		count += tanso[i];
	}
	cout<< count;
}
