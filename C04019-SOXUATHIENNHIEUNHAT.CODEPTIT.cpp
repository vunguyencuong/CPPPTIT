#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[105]={};
		int tanso[30005]={};
		for(int i = 1; i<= n ;i++)
		{
			scanf("%d",&a[i]);
			tanso[a[i]]++;
		}
		int max = tanso[0];
		for(int i = 0 ; i<= 30005;i++)
		{
			if(max < tanso[i])
			{
				max = tanso[i];
			}
		}
	//	printf("%d",max );
		for(int i = 1; i <= n; i++)
		{
		//	if(tanso[i] >= 1) printf("%d ",tanso[i]); 
			if(tanso[a[i]] == max)
			{
				printf("%d ",a[i]);
				tanso[a[i]] = 0;
			}
			
		}
		printf("\n");
	}
}
