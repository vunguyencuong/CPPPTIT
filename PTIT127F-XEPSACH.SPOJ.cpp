#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	vector<int> v;
	for(int i = 0; i < n ;i++)
	{
		int x;
		cin>> x;
		v.push_back(x);
	}
	int len = v.size()-1;
	int count = 0;
	for(int i = len; i >= 0; i--)
	{
		if(v[i] == len+1)
		{
			len--;
		}
		else count++;
	}
	cout<< count << endl;
}
