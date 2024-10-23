#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	for(int i = 0; i <4; i++)
	{
		int x;
		cin>> x;
		a.push_back(x);
	}
	int count = 0;
	sort(a.begin(),a.end());
	for(int i = 0; i < 4; i++)
	{
		if(a[i] != a[i+1]) count++;
	}
	if(count != 4) cout<< 4-count;
	else cout<< 0;
}
//idea2: su dung mang tan so
