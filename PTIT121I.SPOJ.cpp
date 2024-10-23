#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>> T;
	while(T--)
	{
		int n,r;
		string s;
		cin>> n >> r;
		cin.ignore();
		getline(cin,s);
		cout<< n << " ";
		for(int i = 0; i < s.size() ; i++)
		{
			for(int j = 1 ; j <= r; j++)
			{
				cout<< s[i];
			}
		}
		cout<< endl;
	}
}
