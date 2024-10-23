#include<stdio.h>
#include<math.h>
typedef long long ll;

int check1(ll n)
{
	ll m = n;
	ll res = 0;
	while(n)
	{
		res = res*10 + n%10;
		n /= 10;
	}
	if(m == res) return 1;
	return 0;
}

int check2(ll n)
{
	int sum = 0;
	while(n)
	{
		int x = n%10;
		if(x % 2 == 0) return 0 ;
		else
		{
			sum += x;
		}
		n/=10;
	}
	if(sum % 2 != 0) return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		if(check1(n) == 1 && check2(n) == 1) printf("YES\n");
		else printf("NO\n");
		//printf("%d",check1(n));
	//	printf("\n%d",check2(n));
	}
}
