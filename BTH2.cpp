#include<stdio.h>
#include<math.h>

int main()
{
	
	int n;
	scanf("%d",&n);
	int a[n+5];
	for(int i = 1; i <= n ;i++)
	{
		scanf("%d",&a[i]);
	}
	int min1 = 10000000, min2 = 10000000;
	for(int i = 1; i <= n ;i++)
	{
		if(a[i] < min1)
		{
			min2 = min1;
			min1 = a[i];
		}
		else if(min1 < a[i] && min2 > a[i]) min2 = a[i];
	}
	printf("%d %d",min1,min2);
}
