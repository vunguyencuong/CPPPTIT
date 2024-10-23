#include<bits/stdc++.h>
using namespace std;
int main()
{
 	vector<int> a;
	for(int i = 0; i < 4 ;i++)
	{
		int x;
		cin>> x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	int S = a[0]*a[2];
	cout<< S;
	
	
	
	return 0;
}
