#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[10000]={};
	int ts[10000]={};
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		ts[a[i]] ++;
	}
	int count = 0;
	for(int i = 0; i < 10000; i++)
	{
		if(ts[i] == 1) count++;
	}
	printf("%d\n",count);
	for(int i = 0; i < n; i++)
	{
		if(ts[a[i]] == 1)
		{
			printf("%d ",a[i]);
			ts[a[i]] = 0;
		}
	}
	return 0;
	
}
