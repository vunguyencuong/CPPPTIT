#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true)
	{
		int n;
		cin>> n;
		if(n == 0) return 0;
		int count = 0;
		if(n == 1)
		{
			cout<< "1" << endl;
		}
		else if(n != 1)
		{
			if(n % 2 == 0)
			{
				count++;
				n = n/2;
			}
			if(n % 2 != 0)
			{
				count++;
				n = n*3+1;
			}
		}
		cout<< count << endl;
	}
}
