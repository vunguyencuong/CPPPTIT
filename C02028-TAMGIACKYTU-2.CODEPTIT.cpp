#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0 ;i < n ;i++)
	{
		char c = 'A' + 2*i;
		for(int j = 1; j <= n - i;j++)
		{
			printf("%c",c);
			c += 2;
		}
		printf("\n");
		c += 2;
	}
}
