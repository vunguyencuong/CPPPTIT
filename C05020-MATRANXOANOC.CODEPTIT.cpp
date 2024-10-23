#include<stdio.h>
#include<math.h>
#include<stdbool.h>
long long b[100]={};
void Fibo()
{
	long long  c = 2;
	long long f0 = 0;
	long long f1= 1;
	long long f2 = 0;
	int count = 0;
	b[0] = 0;
	b[1] = 1;
	while(true)
	{
		f2 = f1 + f0;
		f0 = f1;
		f1 = f2;
		b[c] = f2;
		c++;
		if(c > 81) break;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	long long  a[10][10] = {};
	Fibo();
	int hang = n-1;
	int cot = n-1;
	int d = 0;
	int c = 0;
	while(d <= n/2)
	{
		for(int i = d; i <= cot ;i++)
		{
			a[d][i] = b[c];
			c++;
		}
		for(int i = d+1; i <= hang; i++)
		{
			a[i][cot]=b[c];
			c++;
		}
		for(int i = cot-1; i >= d;i--)
		{
			a[hang][i]=b[c];
			c++;
		}
		for(int i = hang-1; i > d; i--)
		{
			a[i][d]=b[c];
			c++;
		}
		d++ ; hang--; cot--;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n ;j++)
		{
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
}
