#include<stdio.h>
#include<math.h>
int main()
{
	int a[100];
	int b[100];
	int n,m;
	scanf("%d%d",&m,&n);
	for(int i = 1; i <= m ;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j = 1; j <= n; j++)
	{
		scanf("%d",&b[j]);
	}
	int p;
	scanf("%d",&p);
	for(int i = 1; i <= p;i++)
	{
		printf("%d ",a[i]);
	}
	for(int i = 1; i<= n; i++)
	{
		printf("%d ",b[i]);
	}
	for(int i = p+1; i<= m ;i++)
	{
		printf("%d ",a[i]);
	}
}
