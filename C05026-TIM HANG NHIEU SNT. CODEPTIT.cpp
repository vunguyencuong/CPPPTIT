#include<stdio.h>
#include<math.h>
int Snt(int n)
{
	if(n < 2) return 0;
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
	int a[n][n]={};
	for(int i = 0; i < n ;i++)
	{
		for(int j = 0; j < n ;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int count = 0;
	int b[1000]={};
	for(int i = 0; i < n ;i++)
	{
		for(int j = 0; j < n;j++)
		{
			if(Snt(a[i][j]) == 1)
			{
				count++;
			}
		}
		b[i] = count;
		count = 0;
	}
/*	for(int i = 0; i <n ;i++)
	{
		printf("%d ",b[i]);
	}
	*/
	int max = 0;
	int index = 0;
	for(int i = 0; i < n ;i++)
	{
		if(b[i] > max)
		{
			max = b[i];
			index = i;
		}
	}
	printf("%d\n",index+1);
	for(int j = 0; j <n;j++)
	{
		if(Snt(a[index][j]) == 1)
		{
			printf("%d ",a[index][j]);
		}
	}
	
}
