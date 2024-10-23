#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int count = 0;
	int i = 1;
	while(n > 0)
	{
		long long sum = i*(i+1)/2;
		n -= sum;
		if(n >= 0) count++;
		i++;
	}
	cout<< count;
}
