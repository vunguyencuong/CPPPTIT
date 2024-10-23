#include<bits/stdc++.h>
using namespace std;
vector<int> check(1e6+3,1); 

void snt()
{
	check[0] = check[1] = 0;
	for(int i = 2; i*i < 1e6+3; i++)
	{
		if(check[i] == 1)
		{
			for(int j = i*i; j <= 1e6+3; j+=i)
			{
				check[j] = 0;
			}
		}
	}
	for(int i = 3; i < 1e6+3; i++)
	{
		check[i] += check[i-1];
	}
}
 
int main()
{
	int t;
	cin>> t;
	snt();
	while(t--)
	{
		long long l,r;
		cin>> l >> r;
		cout<< check[sqrt(r)] - check[sqrt(l)] << endl;
	}
	 
	
} 
