#include<bits/stdc++.h>
using namespace std;
int np[100] , n;
void Backtrack(int i)
{
	for(int j = 0; j < 2; j++)
	{
		np[i] = j;
		if(i == n)
		{
			for(int l = 1; l <= n; l++)
			{
				cout<< np[l];
			}
			cout<< " ";
		}
		else Backtrack(i+1);
	}
}

int main()
{
	cin>> n;
	for(int i = 1; i <= n; i++)
	{
		np[i] = 0;
	}
	Backtrack(1);
}