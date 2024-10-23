#include<stdio.h>
int main()
{
	int m,n;
	int i,j,k;
	int count = 0;
	int start = 64;
	int add = 0;
	scanf("%d%d",&m,&n);
	for(int i = 1; i <= m ;i++)
	{
		int t = start + n;
		if(i > n)
		{
			for(int j = 1; j <= n;j++)
			{
				printf("%c",t);
				t--;
			}
		}
		else
		{
			for(int j = 1; j <= n;j++)
			{
				if(j+add <= n)
				{
					printf("%c",start+j+add);
				}
				if(j + add > n)
				{
					int p = add;
					for(int k = p; k >= 1; k--)
					{
						printf("%c",start+k);
					}
					break;
				}
			}
			add++;
		}
		printf("\n");
	}
}
