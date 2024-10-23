#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>> s;
	string s1;
	for(int i = 0; i < s.size();i++)
	{
		if(i % 3 == 2) s1 = s1+s[i]+',';
		else s1 = s1 +  s[i];
	}
	s1.erase(s1.end()-1);
	cout<< s1;
}

