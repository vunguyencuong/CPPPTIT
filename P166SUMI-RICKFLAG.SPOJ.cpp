#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>> n;
	int a[1005] = {0};
	for(int i = 0; i < n;i++)
	{
		cin>> a[i];
	}
	int count = 0;
	for(int i = 0; i < n;i++)
	{
		if(a[i] == 0) count++;
 	}
 	if(count == 1) cout<< "YES" << endl;
 	else cout<< "NO" << endl;
}
