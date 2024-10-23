#include<stdio.h>
#include<math.h>
typedef long long ll;


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		ll f0 = 0;
		ll f1= 1;
		ll f2 = 0;
		while(f2 < n)
		{
			f2 = f0+f1;
			f0 = f1;
			f1 = f2;
		}
		//printf("%lld %lld ",f1,f2);
		if(n == f2) printf("YES\n");
		else printf("NO\n");
	}
}
