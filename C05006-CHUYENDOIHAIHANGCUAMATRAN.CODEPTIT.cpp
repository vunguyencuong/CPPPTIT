#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int v[50][50]={};
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j< n ;j++)
		{
			scanf("%d",&v[i][j]);
		}
	}
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i = 0; i < m ;i++)
	{
		for(int j = 0;j< n;j++)
		{
			if(i==a-1)
			{
				printf("%d ",v[b-1][j]);
			}
			if(i == b-1)
			{
				printf("%d ",v[a-1][j]);
			}
			if(i != a-1 && i != b-1) printf("%d ",v[i][j]);
		}
		printf("\n");
	}
}
