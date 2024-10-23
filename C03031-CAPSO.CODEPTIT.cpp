#include<stdio.h>
#include<math.h>
typedef long long ll;
ll ucln(ll a, ll b)
{
	if(b == 0) return a;
	return ucln(b,a%b);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll a,b,c,d;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		if(ucln(a,b) == ucln(c,d)) printf("YES\n");
		else printf("NO\n");
	}
}
