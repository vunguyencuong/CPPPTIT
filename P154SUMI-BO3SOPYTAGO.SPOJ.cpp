#include<bits/stdc++.h>
using namespace std;
/*
int check(int n)
{
	if(sqrt(n)*sqrt(n) == n) return 1;
	else return 0;
}
*/
int main()
{
	int n;
	cin>> n;
	int count = 0;
	for(int i= 1; i <= n;i++)
	{
		for(int j = i; j<= n;j++)
		{
			long long x = sqrt(i*i+j*j);
			if(x*x - j*j == i*i && x <= n) count++;
		}
	}
	cout<< count << endl;
}
