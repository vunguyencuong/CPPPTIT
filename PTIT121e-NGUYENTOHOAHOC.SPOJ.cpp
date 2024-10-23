#include<bits/stdc++.h>
using namespace std;
int main()
{
	int M[100000]={};
	string s;
	cin>> s;
	int len = s.length();
	int index = 0;
	int ans = 0;
	for(int i = 0; i < len; i++)
	{
		if(s[i] == '(')
		{
			index++;
			M[index] = 0;
		}
		else if(s[i] == ')')
		{
			int n = 0;
			while(M[index] != 0)
			{
				n += M[index--];
			}
			M[index] = n;
		}
		else if(s[i] == 'C')
		{
			index++;
			M[index] = 12;
		}
		else if(s[i] == 'H')
		{
			index++;
			M[index] = 1;
		}
		else if(s[i] == 'O')
		{
			index++;
			M[index] = 16;
		}
		else if(s[i] >= '2' && s[i] <= '9')
		{
			int x = s[i] -'0';
			M[index] *= x;
		}
	}
	for(int i = 1 ; i <= index ; i++)
	{
		ans += M[i];
	}
	cout<< ans;
	
	
	return 0;
}
