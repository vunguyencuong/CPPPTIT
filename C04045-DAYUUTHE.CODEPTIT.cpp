#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char c;
		int n = 0 , a[1000];
		do
		{
			scanf("%d",&a[n]);
			n++;
			c = getchar();
		}while(c != '\n');
		int chan = 0;
		int le = 0;
		for(int i = 0; i < n;i++)
		{
			if(a[i] % 2 == 0) chan++;
			else le++;
		}
		if(n % 2 == 0)
		{
			if(chan > le) printf("YES\n");
			else printf("NO\n");
		}
		else 
		{
			if(le > chan) printf("YES\n");
			else printf("NO\n");
		}
	}
	
}
