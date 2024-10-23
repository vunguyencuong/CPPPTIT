#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int  b;
	cin >> a;
	cin >> b;
	int n , so = 0;
	for(int i = 0; i < a.size(); i++)
	{
		n = so*10 + (a[i] - '0');
		so = n % b;
	}
	cout << so;
	
}
