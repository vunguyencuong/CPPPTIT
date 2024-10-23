#include<stdio.h>
#include<math.h>

int check1(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}

int check2(int n)
{
	while(n)
	{
		int x = n%10;
		if(check1(x) == 0) return 0;
		n/= 10;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int count = 0;
		for(int i = a; i <= b ;i++)
		{
			if(check2(i) == 1 && check1(i) == 1) count++;
		}
		printf("%d\n",count);
	}
}
