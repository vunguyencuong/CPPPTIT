#include<stdio.h>
#include<math.h>


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%d",&n);
		int count = 0;
		if(n % 2 != 0) printf("0\n");
		else
		{
			for(int i = 1; i*i<= n; i++)
			{
				if(n%i == 0)
				{
					if(i % 2 == 0) count++;
					if((n/i) % 2 == 0) count++;
					if(i == n/i) count--;
				}
	
			}
			printf("%d\n",count);
		}
	}
}
