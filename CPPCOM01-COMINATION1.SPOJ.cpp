#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		int n;
		cin>> n;
		if(n <= 0) return 0;
		vector<string> v;
		v.push_back("0");
		v.push_back("1");
		int i,j;
		for(i = 2; i < pow(2,n); i *= 2)
		{
			for(j = 0; j <= i-1; j++)
			{
				v.push_back(v[j]);
			}
			
			for(j = 0; j < i; j++)
			{
				v[j] = "0" + v[j];
			}
			for(j = i; j < 2*i; j++)
			{
				v[j] = "1" + v[j];
			}
		}
		for(i = 0; i < v.size(); i++)
		{
			cout<< v[i] << " ";
		}
		cout<< endl;
	}
	
	
}
