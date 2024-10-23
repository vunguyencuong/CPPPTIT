#include<stdio.h>
#include<math.h>



int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x1,y1;
		int x2,y2;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		int AB = sqrt((y2-y1)*(y2-y1));
		int BC = sqrt((x2-x1)*(x2-x1));
		if(AB == BC) printf("YES\n");
		else printf("NO\n");
	}
}
