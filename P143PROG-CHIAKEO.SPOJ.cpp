#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>> n >> k;
	if(k % (n-1) == 0)
	{
		int th1 = (k/(n-1))*n;
		int th2 = k + (k/(n-1)) -1;
		if(th1 < th2) cout<< th1 << " " << th2;
		else cout<< th2 << " " << th1;
	}
	else
	{
		int Teo = (k/(n-1));
		cout<< k+Teo << " " <<k+Teo;
	}
}
