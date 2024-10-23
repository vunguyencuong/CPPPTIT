#include<stdio.h>
#include<math.h>

struct data
{
	double x;
	double y;
};
double len(struct data a, struct data b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int check(double AB, double BC, double AC)
{
	if(AB >= AC+BC || AC >= AB+BC || BC >= AB+AC) return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		struct data a,b,c;
		scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
		double AB = len(a,b);
		double BC = len(b,c);
		double CA = len(c,a);
		if(check(AB,BC,CA))
		{
			printf("%.3lf\n",AB+BC+CA);
		}
		else printf("INVALID\n");
	}
}
