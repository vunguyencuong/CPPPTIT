#include<stdio.h>
#include<math.h>
typedef long long ll;


int check(ll n)
{
	while(n)
	{
		int x = n%10;
		if(x%2 == 1) return 0;
		n/=10;
	}
	return 1;
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		if(check(n) == 1) printf("YES\n");
		else printf("NO\n");
		
		
	}
}
