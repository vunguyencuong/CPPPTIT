#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n]={};
	for(int i = 0; i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	long long sum = 0;
	for(int i = 0; i < n ;i++)
	{
		sum += a[i];
	}
	double result =(double) sum/n;
	printf("%.3lf",result);
	
}
