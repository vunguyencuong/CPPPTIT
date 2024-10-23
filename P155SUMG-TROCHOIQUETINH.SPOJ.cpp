#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>> n>> m;
	int Win = 1;
	while(1)
	{
		if(n == 0 || m == 0) break;
		n--;
		m--;
		if(Win == 1) Win = 2;
		else Win = 1;
	}
	if(Win == 1) cout<< "Wilshere";
	else cout<< "Xavi";
}
