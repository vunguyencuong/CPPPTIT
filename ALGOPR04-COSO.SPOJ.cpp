#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	while(s.length()%3!= 0)
	{
		s = '0'+s;
	}
	for(int i = 0; i < s.length()-2;i+=3)
	{
		string find = "";
		for(int j = i; j < i+3; j++)
		{
			find = find + s[j];
		}
		if(find == "000") cout<< "0";
		else if(find == "001") cout<< "1";
		else if(find == "010")cout<< "2";
		else if(find == "011") cout<< "3";
		else if(find == "100") cout<< "4";
		else if(find == "101") cout<< "5";
		else if(find == "110") cout<< "6";
		else if(find == "111") cout<< "7";
	}
	
	
	
}
