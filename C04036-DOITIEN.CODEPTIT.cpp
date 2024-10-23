#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[10]={1,2,5,10,20,50,100,200,500,1000};
		int result = 0;
		for(int i = 9; i>= 0 ;i--)
		{
		//	printf("%d ",a[i]);
			result += n/a[i];
			n = n%a[i];
		}
		printf("%d\n",result);
	}
}
