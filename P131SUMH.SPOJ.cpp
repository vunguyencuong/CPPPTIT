#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>> a >> b >> c;
	int m = b-a;
	int n = c-b;
	if(m > n) cout<< m-1;
	else if(m < n) cout<< n-1;
	else if(m == n) cout<< m-1;
}
