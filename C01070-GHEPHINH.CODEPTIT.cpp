#include<stdio.h>
#include<math.h>


int main()
{
	int a[10];
	for(int i = 0; i < 6; i++)
	{
		scanf("%d",&a[i]);
	}
	int max = a[0];
	for(int i = 0; i < 6;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	long long S = a[0]*a[1] + a[2]*a[3] + a[4]*a[5];
	if(S == max*max) printf("YES");
	else printf("NO");
}
