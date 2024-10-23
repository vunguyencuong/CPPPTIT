#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={};
	for(int i = 1 ;i <= 4 ;i++)
	{
		cin>> a[i];
	}
	int count = 0;
	double max = (double)a[1]/a[3] + (double)a[2]/a[4];
	double x1 = (double)a[3]/a[4] + (double)a[1]/a[2];
	double x2 = (double)a[4]/a[2] + (double)a[3]/a[1];
	double x3 = (double)a[2]/a[1] + (double)a[4]/a[3]; 
	if(x1 > max)
	{
		max = x1;
		count = 1;
	}	
	if(x2 > max)
	{
		max = x2;
		count = 2;
	}
	if(x3 > max)
	{
		max = x3;
		count = 3;
	}
	cout<< count << endl;
	
}
