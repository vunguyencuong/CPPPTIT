#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,k,j,m;
	int count = 0;
	cin>> n >> k;
	vector<bool> check(1000,true);
	for(int i = 2; i <= n; i++)
	{
		if(check[i] == true && count < k)
		{
			check[i] = false;
			count++;
			if(count == k) m = i;
			j =i*i;
			while(count < k && j <= n)
			{
				if(check[j] == true )
				{
					check[j] = false;
					count++;
					if(count == k) m = j;
			
				}
				j+= i;
			}
 		}
	}
	cout<< m;
}
