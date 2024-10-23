#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 1;i<= n; i++)
	{
		int d = 0;
		if(i%2 != 0)
		{
			for(int j = 1; j<= i;j++)
			{
				printf("%c ",(i*(i-1))/2+1+d+96);
				d++;
			}
		}
		else for(int j = 1;j<=i;j++)
		{
			printf("%c ",(i*(i-1))/2-d+96);
			d++;
		}
		printf("\n");
	}
}
