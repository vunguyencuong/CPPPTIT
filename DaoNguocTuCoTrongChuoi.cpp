#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	vector<string> v(100);
	int  k=0;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != ' ')
		{
			v[k].push_back(s[i]);
		}
		else
		{
			if(s[i-1] != ' ')
			{
				k++;	
			}
		}
	}
	if(s[s.size() - 1] == ' ') k = k;
	else k = k + 1; 
	for(int i = k-1; i >= 0; i--)
	{
		cout<< v[i] << " ";
	}
}
