#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>> T;
	while(T--)
	{
		int n,x,y;
		cin>> n;
		int a[n][n]={};
		int d = 0, value = 1, hang = n-1 , cot = n-1;
		while(d <= n/2)
		{
			for(int i = d; i <= cot ;i++) a[d][i] = value++;
			for(int i = d+1; i <= hang; i++) a[i][cot]=value++;
			for(int i = cot-1; i >= d;i--) a[hang][i]=value++;
			for(int i = hang-1; i > d; i--) a[i][d]=value++;
			d++ ; hang--; cot--;
		}
	}
}
