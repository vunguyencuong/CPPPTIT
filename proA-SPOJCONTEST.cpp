#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int  x1,y1,x2,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		int n;
		scanf("%d",&n);
		int v[n][2];
		int count = 0;
		for(int i = 0; i < n ;i++)
		{
			for(int j = 0; j < 2 ;j++)
			{
				scanf("%d",&v[i][j]);
			}
		} 
		if(x1 != x2)
		{
			double a = (double) (y2-y1)/(x2-x1);
			double b = (double) y1 - a*x1;
			for(int i = 0; i < n ;i++)
			{
				if(a*v[i][0] + b == v[i][1]) count++;
			}
			printf("%d\n",count);
		}
		else if(x1 == x2 && y1 != y2) printf("0\n");
		
	}
}

