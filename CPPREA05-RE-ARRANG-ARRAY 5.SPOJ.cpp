#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>> n;
		vector<int> a;
		for(int i = 0; i < n;i++)
		{
			int x;
			cin>> x;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		int len = a.size()-1;
		for(int i = len; i >= 0; i--)
		{
			if(len - i != i && i > len/2) cout<< a[i] << " " << a[len-i] <<" ";
			else if(len - i == i)
			{ 
				cout<< a[i ] << " ";
			}
		}
		cout<< endl;
		
	}
}
