#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
	
		string a;
		long long  b;
		cin >> a;
		cin >> b;
		long long n , so = 0;
		for(int i = 0; i < a.size(); i++)
		{
			n = so*10 + (a[i] - '0');
			so = n % b;
		}
		cout << so << endl;
	}
}

