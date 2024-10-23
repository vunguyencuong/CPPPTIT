#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int count = 0;
	int d = 1;
	while(n > 0)
	{
		n -= d*(d+1)/2;
		count++;
		d++;
	}
	cout<< count-1 << endl;
}
