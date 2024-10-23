#include<bits/stdc++.h>
using namespace std;

vector<bool> check(1e6,true);

void snt()
{
	check[0] = check[1] = false;
	for(int i = 2; i*i <= 1e6; i++)
	{
		if(check[i] == true)
		{
			for(int j = 2*i; j*j <= 1e6; j+=i)
			{
				check[j] = false;
			}
		}
	}
}



int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int l,r;
		cin>> l >> r;
		int count = 0;
		snt();
		for(int i = l ; i<= r; i++)
		{
			int count1 = 0;
			for(int j = 2; j <= sqrt(i); j++)
			{
				if(i % j == 0)
				{
					if(j) count1 ++;
					i /= j;
				}
			}
			cout<< count1 ;
		}	
	}
	
	return 0;
}
