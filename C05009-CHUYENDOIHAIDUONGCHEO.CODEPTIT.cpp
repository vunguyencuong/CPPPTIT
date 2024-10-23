#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m = n;
	int a[55][55]={};
	for(int i = 1; i<= n ;i++)
	{
		for(int j = 1; j<= n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 1; i<= n ;i++)
	{
		int tmp = a[i][i];
		a[i][i] = a[i][m];
		a[i][m] = tmp;
		m--;
		
		
	}
	for(int i = 1; i<= n; i++)
	{
		for(int j = 1; j<= n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
}
