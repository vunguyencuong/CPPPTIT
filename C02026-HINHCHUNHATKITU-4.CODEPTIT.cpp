#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int c = 'A';
	if(m <= n)
	{
		for(int i = 1; i <= m ;i++)
		{
			int count = 0;
			for(char d = c + m - i; d <= c+n-1;d++)
			{
				printf("%c",d);
				count++;
			}
			for(int j = count; j < n; j++)
				printf("%c",c+n-1);
			printf("\n");	
			
		}
	}
	else
	{
		for(int i = 1; i <= n ;i++)
		{
			for(int j = 1; j <= n ;j++)
			{
				printf("%c",c+n-1);
			}
			printf("\n");
		}
		for(int i = 2; i <= (m-n)+1; i++)
		{
			int count = 0;
			for(char d = c+n-i; d <= c+n-1; d++)
			{
				printf("%c",d);
				count++;
			}
			for(int j = count; j < n ;j++)
			{
				printf("%c",c+n-1);
			}
			printf("\n");
		}
	}
}
