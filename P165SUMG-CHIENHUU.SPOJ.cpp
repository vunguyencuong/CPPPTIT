#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll n,a,b;
		cin>> n >> a >> b;
		int check = 0;
		int count  = n/(a+b);
		int ans = 2*count;
		int sur = n - count*(a+b);
		if(sur == a || sur == b)
		{
			ans += 1;
			check = 1;
		}
		if(check == 1) cout<< ans << endl;
		else cout<< -1 << endl;
		
	}
}
