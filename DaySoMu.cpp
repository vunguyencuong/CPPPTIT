#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>> n;
	long long a[1000]={0};
	for(int i = 0; i <= n; i++)
	{
		if(i == 0) a[0] = 1;
		if(i == 1) a[1] = 1;
		if(i == 2) a[2] = 2;
	
		if( i >= 3)
		{
			a[i] = a[i-1] + a[i-2];
		}
		cout<< a[i] << " ";
	}
}
