#include<stdio.h>

int main()
{
	int m,n;
	int i,j;
	scanf("%d %d",&m,&n);
	for(i = 1; i <= m ;i++)
	{
		if(i > n)
		{
			for(j = 0; j < n ;j++)
			{
				printf("%d",i-j);
			}
		}
		else
		{
			if(i == 1)
			{
				for(int j = 1; j <= n;j++)
				{
					printf("%d",j);
				}
			}
			else
			{
				for(int j = i; j >= 1; j--)
				{
					printf("%d",j);
				}
				for(int j = 2; j <= n-i+1;j++)
				{
					printf("%d",j);
				}
			}
		}
		printf("\n");
	}
}
