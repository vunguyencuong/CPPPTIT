#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n;
	cin>> n;
	vector<bool> check(n+1,true);
	check[0] = check[1] = false;
	for(int i = 2; i <= n; i++)
	{
		if(check[i] == true)
		{
			for(int j= 2*i; j <= n; j+= i)
			{
				check[j] = false;
			}
		}
	} 
	for(int i= 2; i <=n; i++)
	{
		if(check[i] == true) cout<< i << " ";
	}
}
