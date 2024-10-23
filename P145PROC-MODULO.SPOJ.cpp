#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10];
	int b[1000+5]={0};
	int count = 0;
	for(int i = 0; i < 10;i++)
	{
		cin>> a[i];
		b[a[i]%42]++;
	}
	for(int i = 0; i <= 1005; i++)
	{
		if(b[i] >= 1) count++;
	}
	cout<< count-1;
}
