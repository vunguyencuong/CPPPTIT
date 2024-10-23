#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int index = 1;
	for(int i = 1; i <= n;i++)
	{
		if(i <= (n-1)/2)
		{
			for(int j = 1; j <= n ;j++)
			{
				if(j <= (n-index)/2 || j > n-(n-index)/2)
				{
					cout<< "*";
				}
				else cout<< "D";	
			}
			index += 2;
			cout<< endl;
		}
		if(i == (n-1)/2+1)
		{
			for(int j = 1 ; j  <= n;j++)
			{
				cout<< "D";
			}
			cout<< endl;
		}
		if(i > (n-1)/2+1)
		{
			for(int j = 1; j <= n; j++)
			{
				if(j <= (n+2-index)/2 || j > n-(n+2-index)/2)
				{
					cout<< "*";
				}
				else cout<< "D";
			}
			index -= 2;
			cout<< endl;
		}
		
	}
}
