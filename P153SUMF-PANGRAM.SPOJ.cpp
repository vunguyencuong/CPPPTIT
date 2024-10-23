#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	vector<char> v;
	int tanso[125]={};
	for(int i = 0; i < n ;i++)
	{
		char c;
		cin>> c;
		v.push_back(c);
		tanso[v[i]-32]++;
	}
	
	int check = 1;
	for(int i = 65; i<= 90;i++)
	{
		//cout<< tanso[i] << " ";
		if(tanso[i] > 1)
		{
			check = 0;
			break;
		}
		
	}
	if(check == 1) cout<< "YES";
	else cout<< "NO";
}
