#include<bits/stdc++.h>
using namespace std;
vector<int> check(1e4,0);
int Uoc(int n)
{
	int sum = 0;
	for(int i = 1; i*i <= n;i++)
	{
		if(n % i == 0)
		{
			if(sqrt(n) == i) sum += i;
			else 
			{
				sum = sum + i + n/i;
			}
		}
	}
	if(sum-n > n) return 1;
	else return 0;
}
void Count()
{
	for(int i = 1; i <= 1e4;i++)
	{
		if(Uoc(i) == 1 ) check[i] = 1;
	}
	for(int i = 1; i <= 1e4; i++)
	{
		check[i] += check[i-1];
	}
}
int main()
{
	Count();
	int l,r;
	cin>> l >> r;
	//int count = 0;
/*	for(int i = l; i <= r ;i++)
	{
		if(Uoc(i)== 1) count++;
	}
	*/
	cout<< check[r] - check[l];
	
	return 0;
}
