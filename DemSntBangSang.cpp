#include<bits/stdc++.h>
using namespace std;

vector<bool> check(1e6+5, true);

void snt()
{
	check[0] = check[1] = false;
	for(int i = 2; i*i <= 1e6; i++)
	{
		if(check[i] == true)
		{
			for(int j = 2*i; j*j <= 1e6 ; j+=i)
			{
				check[j] = false;
			}
		}
	}
}

void Run()
{
	int l,r; cin>> l>> r;
	for(int i = l; i <= r ; i++)
	{
		if(check[i] == true)
			cout<< i << " ";
	}
	cout<< endl;
}

int main()
{
	int T;
	cin>> T;
	snt();
	while(T--)
	{
		Run();
	}
}
