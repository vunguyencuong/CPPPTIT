#include<stdio.h>
int main()
{
	int m,n;
	int i,j;
	scanf("%d%d",&m,&n);
	int max = m;
	if( m < n) max = n;
	for(int i = 1; i <= m; i++)
	{
		char c = 'a'+max-1;
		for(int j = 1; j <= n; j++)
		{
			if(j < i) printf("%c",c--);
			else printf("%c",c);
		}
		printf("\n");
	}
}
