#include<stdio.h>
#include<math.h>


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double x1,y1;
		double x2,y2;
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		double d = 0;
		d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		printf("%.4lf\n",d);
	}
}
