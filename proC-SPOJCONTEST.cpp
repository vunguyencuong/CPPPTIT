#include<bits/stdc++.h>
using namespace std;
string z;
string s;
string X;
char Change(char c, int len)
{
	if(c == ' ' ) return c;
	for(int i = 0; i < len ;i++ )
	{
		if(z[i] == c) return s[i];
	}
	return c;
}

int main()
{
	cin>> z >> s;
	cin.ignore();
	getline(cin,X);
	int s1 = z.length();
	int s2 = s.length();
	int s3 = X.length();
	for(int i = 0; i < s3;i++)
	{
		cout<< Change(X[i],s1);
	}
}
