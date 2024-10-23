#include<stdio.h>
#include<math.h>
int Snt(int n)
{
	if(n < 2 ) return 0;
	for(int i = 2; i*i <= n ;i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[100][100]={};
	for(int i = 0 ;i < n;i++)
	{
		for(int j = 1; j <= n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j <= n ;j++)
		{
			if(Snt(a[i][j]) == 1)
			{
				sum += a[i][j];
			}
		}
	}
	printf("%d",sum);
}
