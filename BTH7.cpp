#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int T = t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[25][25]={};
		for(int i = 0; i < n ;i++)
		{
			for(int j = 0; j < n;j++)
			{
				if(j <= i) a[i][j] = j+1;
				else a[i][j] = 0;
			}
		}
		int b[25][25]={};
		for(int i = 0; i < n ;i++)
		{
			for(int j = 0; j < n ;j++)
			{
				b[i][j] = a[j][i];
			}
		}
		printf("Test %d:\n",T-t);
		int c[25][25]={};
		for(int i = 0; i< n;i++)
		{
			for(int j = 0; j< n;j++)
			{
				c[i][j] = 0;
				for(int k = 0; k < n;k++)
				{
					c[i][j] += a[i][k]*b[k][j];
				}
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
