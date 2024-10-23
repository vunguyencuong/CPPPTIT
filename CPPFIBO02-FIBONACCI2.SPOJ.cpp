#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	//int mod = 1e9+7;
	while(t--)
	{
		long long n;
		cin>> n;
	//	long long m = n%mod;
		long long f0 = 0;
		long long f1 = 1;
		long long f2=0;
		if(n == 0 || n == 1) cout<< "YES" << endl;
		else 
		{
			while(f2 < n)
			{
				f2 = (f0+f1);
				f0 = f1;
				f1 = f2;
		
			}
			//cout<< f0 << " " << f1 <<" " << f2 << endl;
			if(n == f1) cout<< "YES" << endl;
			else cout<< "NO" << endl;
		}
		
	}
}
