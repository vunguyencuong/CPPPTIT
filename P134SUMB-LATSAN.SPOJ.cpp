#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long G,Y;
	cin>> G >> Y;
	if(Y == 0) return 0;
	long long b = (G+4)/2;
	long long c = Y+G;
	long long denta = b*b - 4*c;
	long long x1 = (b+sqrt(denta))/2;
	long long x2 = (b-sqrt(denta))/2;
	if(x1 > x2)
	{
		long long tmp = x1;
		x1 = x2;
		x2 = tmp;
	}
	cout<< x1 << " " << x2;
}
