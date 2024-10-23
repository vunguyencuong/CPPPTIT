#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	string s;
	cin>> s;
	int m = s.size()-1;
	int water = 1;
	for(int i = 0; i <= m ;i++)
	{
		if(s[i] == 'S') water++;
		else
		{
			water++;
			i++;
		}
	}
	cout<< water;
}
