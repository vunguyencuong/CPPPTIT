#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	while(s.length()%3 != 0)
	{
		s = '0'+s;
	}
	string m;
	for(int i = 0; i < s.length(); i+=3)
	{
		m = "";
		for(int j = i; j <i+3;j++)
		{
			m += s[j];
		}
		if(m == "000") cout<<"0";
		if(m == "001") cout<<"1";
		if(m == "010") cout<<"2";
		if(m == "011") cout<<"3";
		if(m == "100") cout<<"4";
		if(m == "101") cout<<"5";
		if(m == "110") cout<<"6";
		if(m == "111") cout<<"7";
	}
}
