#include<stdio.h>
#include<math.h>

void Chan(int a[], int n)
{
	for(int i = 0; i < n ;i++)
	{
		if(a[i] % 2 == 0) printf("%d ",a[i]);
	}
}
void Le(int a[], int n)
{
	for(int i = 0; i < n ;i++)
	{
		if(a[i] % 2 != 0) printf("%d ",a[i]);
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i = 0; i < n ;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0; i < n ;i++)
	{
		for(int j = i+1 ; j < n; j++)
		{
			if(a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	Chan(a,n);
	Le(a,n);
}
