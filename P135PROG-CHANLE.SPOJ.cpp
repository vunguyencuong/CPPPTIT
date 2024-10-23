#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>> n >> k;
	long long chan = 0;
	long long le = 0;
	if(n % 2 == 0)
	{
		chan = le = n/2;
		if(k <= le) cout<< 2*k-1 << endl;
		else cout<< (k-le)*2 << endl;
	}
	else
	{
		chan = (n-1)/2;
		le = chan + 1;
		if(k <= le) cout<< 2*k - 1 << endl;
		else cout<< (k-(n/2) - 1)*2;
	}

}
