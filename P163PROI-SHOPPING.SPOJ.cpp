#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll d1,d2,d3;
	cin>> d1 >> d2 >> d3;
	ll s[10] = {};
	s[1] = d1 + d2 + d3;
	s[2] = 2*(d1+d2);
	s[3] = 2*(d1+d3);
	s[4] = 2*(d2+d3);
	sort(s+1,s+5);
	cout<< s[1] << endl;
}
