#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int a,m;
		cin>> a >> m;
		int min = -1;
		for(int i = 1; i <= m-1; i++)
		{
			if((a*i)%m == 1)
			{
				min = i;
				break;
			}
		}
		cout<< min << endl;
	}
}
