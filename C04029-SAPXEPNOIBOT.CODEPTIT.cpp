#include<stdio.h>
#include<math.h>

int check(int a[], int n)
{
	int check = 1;
	for(int i = 0; i < n-1;i++)
	{
		if(a[i] > a[i+1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[1000];
	int m = 1;
	for(int i = 0; i < n ;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < n-1 ;i++)
	{
		for(int j = 0; j < n-1-i;j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
		printf("Buoc %d: ",m);
		m++;
		for(int i = 0; i < n; i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		if(check(a,n) == 1) break;
	}
	
}
