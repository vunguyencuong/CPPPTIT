#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int dong = 2 * n - 1;
	int cot = dong;
	for (int i = 0; i < dong; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < i; j++)
				printf("%d", n - j);
			for (int j = 1; j <= cot; j++)
			{
				printf("%d", n - i);
			}
			for (int j = i - 1; j >= 0; j--)
				printf("%d", n - j);
			printf("\n");
			cot -= 2;
		}
		else
		{
			cot += 2;
			for (int j = 0; j < i - cot; j++)
				printf("%d", n - j);
			for (int j = 1; j <= cot + 1; j++)
				printf("%d", n - (i - cot) + 1);
			for (int j = i - cot - 2; j >= 0; j--)
				printf("%d", n - j);
			printf("\n");
		}
	}
}