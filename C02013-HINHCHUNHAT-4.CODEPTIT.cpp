#include<stdio.h>
int main()
{
	int m,n;
	int i,j;
	scanf("%d%d",&m,&n);
	for(i = m; i >= 1 ;i--)
	{
		if(m >= n)
		{
		
			if(i > n)
			{
				for(int j = 0; j < n; j++)
				{
					printf("%d",i-j);
				}
			}
			else
			{
				if(i == n)
				{
					for(int j = n ;j >= 1;j--)
					{
						printf("%d",j);
					}
				}
				else
				{
					for(int j = i; j >= 1;j--)
					{
						printf("%d",j);
					}
					for(int j = 2; j <= n-i+1; j++)
					{
						printf("%d",j);
					}
				
				}
			}
		}
		else
		{
			for(int j = n-(m-i); j >= 1;j--)
			{
				printf("%d",j);
			}
			for(int j = 2; j <= m-i+1;j++)
			{
				printf("%d",j);
			}
		}
	
		printf("\n");
	}
}
