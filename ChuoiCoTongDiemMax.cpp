#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	vector <string> s(100);
	vector<vector<int> > a(3,vector<int>(n,0));
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		getline(cin,s[i]);
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin>> a[i][j];
		}
	}
	int bien , max = 0;
	for(int i= 0; i < n; i++)
	{
		bien = 0;
		for(int j = 0; j < 3; j++)
		{
			bien += a[i][j];
		}
		if(bien > max) max = bien;
	}
	for(int i = 0; i < n ;i++)
	{
		bien = 0;
		for(int j = 0; j < 3; j++)
		{
			bien += a[j][i];
		}
		if(bien == max)
		{
			cout<< s[i] << " ";
			for(int k = 0; k < 3; k++)
			{
				cout<< a[k][i] << " ";
			}
			cout<< endl;
		}
		
	}
}
