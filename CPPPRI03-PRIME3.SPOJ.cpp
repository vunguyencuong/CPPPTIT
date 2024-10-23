#include<bits/stdc++.h>
using namespace std;
vector<bool> check(1e6,1);
void Snt()
{
	check[0] = check[1] = 0;
	for(int i = 2; i *i <= 1e6;i++)
	{
		if(check[i] == 1)
		{
			for(int j = i*i; j<= 1e6;j+=i)
			{
				check[j] = 0;
			}
		}
	}
}

int main()
{
	int t;
	cin>> t;
	Snt();
	while(t--)
	{
		int n;
		cin>> n;
		for(int i = 2; i<= n ;i++)
		{
			if(check[i] == 1) cout<< i << " ";
		}
		cout<< endl;
		
	}
}
