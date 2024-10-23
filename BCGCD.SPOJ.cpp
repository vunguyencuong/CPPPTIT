#include<bits/stdc++.h>
using namespace std;

long long ucln(long long n,long long m)
{
	if(m == 0) return n;
	return ucln(m,n%m);		
}
/*long long bcnn(long long n, long long m)
{
	return m*n/ucln(n,m);
}  */
int main()
{
	while(true)
	{
		long long n, m;
		cin>> n >> m;
		if( n == 0 && m == 0) break;
		long long bcnn = n*m/ucln(n,m);
		cout<< ucln(n,m) << " " << bcnn << endl;
	}
}
