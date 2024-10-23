#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	int index = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '0')
		{
			index = i;
			break;
		}
	}
	if(index != 0)
	{
		s.erase(index,1);
	}
	else s.erase(0,1);
	cout<< s;
}
