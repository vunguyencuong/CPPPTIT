#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>> T;
	while(T--)
	{
		double n,l,m;
		cin>> n >> l >> m;
		double l1 = l/100;
		double M = n*(l1+1);
		int count = 1;
		while(M < m)
		{
			M = M + M*l1;
			count++;
		}
		cout<< count << endl;
	}
	
}
