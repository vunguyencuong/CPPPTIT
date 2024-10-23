#include<bits/stdc++.h>
using namespace std;

int value_csc_E(int n)
{
	if(n == 0 || n == 4 || n == 7 ) return 1;
	else if(n == 1 | n == 8) return 2;
	else if(n == 5) return 3;
	else if(n == 2) return 4;
	else if(n == 9) return 5;
	else if(n == 6) return 6;
	else if(n == 3) return 8;
}


int main()
{
	int a,b;
	cin>> a >> b;
	int csc_E;
	for(int i = a+1; i<= 62;i++)
	{
		if(i == 46 || i == 56) csc_E = 7;
		else if(i == 53) csc_E = 9;
		else
		{
			int csc = i%10;
			csc_E = value_csc_E(i);
		}
		if(csc_E == b)
		{
			cout<< i;
			return 0;
		}
	}
	cout<< 0;
	
	
	return 0;
}
