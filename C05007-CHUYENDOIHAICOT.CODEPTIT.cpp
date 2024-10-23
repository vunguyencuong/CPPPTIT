#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int v[55][55]={};
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j<= n ;j++)
		{
			scanf("%d",&v[i][j]);
		}
	}
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i = 1; i <= m ;i++)
	{
		for(int j = 1;j<= n;j++)
		{
			if(j==a)
			{
				printf("%d ",v[i][b]);
			}
			else if(j == b)
			{
				printf("%d ",v[i][a]);
			}
			else printf("%d ",v[i][j]);
		}
		printf("\n");
	}
}
