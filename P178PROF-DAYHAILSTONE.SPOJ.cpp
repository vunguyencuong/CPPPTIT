#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(true)
	{
		int n;
		cin>> n;
		if(n == 0)return 0;
		int count = 1;
		while(n != 1)
		{
			if(n%2==0)
			{
				n /= 2;
			}
			else if(n%2 != 0)
			{
				n = 3*n+1;
			}
			count++;
		}
		cout<< count << endl;
	}
}
