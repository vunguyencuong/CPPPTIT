#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int start = 64;
	for(int i = 0; i < n; i++)
	{
		char c = start + n - 1 - i;
		for(int j = 1 ; j <= n-i; j++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
}
