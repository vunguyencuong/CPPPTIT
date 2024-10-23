#include<stdio.h>
#include<math.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i = 1; i <= m ;i++)
	{
		int value = i;
		if(i > n && i <= m)
		{
			printf("%d",n);
			i = n;
		}
		else for(int j = i ;j <= n ;j++)
		{
			printf("%d",j);
		}
		for(int j = i -1; j > 0 && j <= n;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		i = value;
	}
}
