#include<stdio.h>
#include<math.h>

int main()
{
	int m,n;
	int i,j;
	scanf("%d %d",&m,&n);
	for(i = 1; i <= m ;i++)
	{
		int count = 1;
		printf("%d",i);
		for( j = i+1; j <= n;j++)
		{
			count++;
			printf("%d",j);
		}
		int k = n - count;
		while(k--)
		{
			printf("%d",j-2);
			j--;
		}
		printf("\n");
	}
}
