#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
	if(n < 2) return false;
	for(int i = 2 ; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}

int main()
{
	int T;
	cin>> T;
	while(T--)
	{
		int m;
		cin>> m;
		int count = 0;
		if(check(m) == true) count++;
		int m1 = 0;
		for(int i = 2; i <= m/2;i++)
		{
			m1 = 0;
			if(check(i) == true)
			{
				for(int j = i; j<= m ;j++)
				{
					if(check(j) == true)
					{
						m1 += j;
						if(m1 == m) count++;
						if(m1 > m) break;
					}
				}
			}
		}
		cout<< count << endl;
	}
}
