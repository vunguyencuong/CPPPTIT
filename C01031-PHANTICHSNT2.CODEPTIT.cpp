#include<stdio.h>
#include<math.h>


int main()
{
	int n;
	scanf("%d",&n);
	int a[1000]={};
	int b = 0;
	for(int i = 2; i*i <= n ;i++)
	{
		while(n % i == 0)
		{
			a[b] = i;
			b++;
			n /= i;
		}
	}
	//if(n > 1) a[b] = n;
//	printf("%d\n",b);
	if(n != 1)
	{
		a[b] = n;
		for(int i = 0; i <= b ;i++)
		{
			if(i < b) printf("%dx",a[i]);
			else printf("%d",a[i]);
		}
	}
	else
	{
		for(int i = 0; i < b ;i++)
		{
			if(i < b- 1) printf("%dx",a[i]);
			else printf("%d",a[i]);
		}
	}
	
}
