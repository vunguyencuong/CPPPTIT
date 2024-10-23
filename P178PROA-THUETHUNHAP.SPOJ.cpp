#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	while(true)
	{
		ll T;
		cin>> T;
		while(T == 0) return 0;
		if(T <= 1e6) cout<< T;
		else if(T > 1e6 && T <= 5000000) cout<< (T*9)/10;
		else if(T > 5000000) cout<< (T*8)/10;
		cout<< endl;
	}
}
