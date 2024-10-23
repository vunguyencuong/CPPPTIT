#include<stdio.h>
#include<math.h>

int check(int n)
{
	int a = n%10;
	int b;
	n/= 10;
	while(n)
	{
		b = n%10;
		if(a >= b) return 0;
		else
		{
			a = b;
		}
		n/=10;
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
		scanf("%d%d",&a,&b);
		int count = 0;
		for(int i = a; i <= b ;i++)
		{
			if(check(i) == 1)
			{
				//printf("%d ",i);
				count++;
			}
		}
		printf("%d\n",count);
	}
}
