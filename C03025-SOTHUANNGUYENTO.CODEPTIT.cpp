#include<stdio.h>
#include<math.h>

int a[1000000000]= {1};

void check()
{
	a[0] = a[1] = 0;
	for(int i = 2; i*i <= 1000000000; i++)
	{
		if(a[i] == 1)
		{
			for(int j = i*i; j <= 1000000000; j += i)
			{
				a[j] = 0;
			}
		}
	}
}
int sum(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int check1(int n)
{
	while(n > 0)
	{
		if(a[n%10] == 0) return 0;
		n /= 10;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	check();
	while(t--)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		int count = 0;
		for(int i = m; i <= n ;i++)
		{
			if(a[i] == 1 && a[sum(i)] == 1 && check1(i) == 1) count++;
		}
		printf("%d\n",count);
	}
}
