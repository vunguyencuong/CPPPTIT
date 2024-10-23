#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>> T;
	while(T--)
	{
		int n;
		cin>> n;
		vector<int> a;
		for(int i = 0; i < n ;i++)
		{
			int m;
			cin>> m;
			a.push_back(m);
		}
		sort(a.begin(),a.end());
		int answer = (a[n-1] - a[0]) * 2;
		cout<< answer << endl;
	}
}
