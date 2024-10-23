#include<stdio.h>
#include<math.h>

int snt(int n)
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
	int a[35][35]={};
	for(int i = 0; i < n ;i++)
	{
		for(int j = 0; j < n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int b[1000]={};
	int count = 0;
	for(int i = 0; i < n ;i++)
	{
		for(int j = 0; j < n;j++)
		{
			if(snt(a[i][j]) == 1) count++;
		}
		b[i] = count;
		count = 0;
	}
	int max = 0;
	int index = 0;
	for(int i = 0; i < n;i++)
	{
		if(b[i] > max)
		{
			max = b[i];
			index = i;
		}
	}
	printf("%d\n",index+1);
	for(int j = 0; j< n;j++)
	{
		if(snt(a[index][j]) == 1) 
		{
			printf("%d ",a[index][j]);
		}
	}
}
