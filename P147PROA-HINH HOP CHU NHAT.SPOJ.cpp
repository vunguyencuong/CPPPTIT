#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long a,b,c;
	cin>> a >> b >> c;
	long long v = sqrt(a*b*c);
	long long x = v/a;
	long long y = v/b;
	long long z = v/c;
	cout<<	(long long)4*(x+y+z);
}
