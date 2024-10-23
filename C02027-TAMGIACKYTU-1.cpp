#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	char chu = '`';
	for (int i = 1; i <= t; i++)
	{
		char kitu = 97 + (i + 1) * i / 2;
		for (int j = 1; j <= i; j++)
		{
			if (i % 2 == 1)
			{
				chu++;
				printf("%c ", chu);
			}
			else if (i % 2 == 0)
			{
				kitu--;
				printf("%c ", kitu);
			}
		}
		printf("\n");
		chu = kitu + i - 1;
	}
}